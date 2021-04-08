#version 410 core

layout (location = 0) in vec3 position;

uniform mat4 mvp;
uniform int interpolate;
uniform int color;
uniform int gradient;

smooth out vec4 smooth_color;
flat out vec4 flat_color;
out vec2 tex_coordinates;

void main()
{
	gl_Position = mvp * vec4(position.x, position.y, position.z, 1.0f);
	vec3 normalized = vec3((position + 1) / 2);
	float grey = (0.2125 * normalized.x + 0.7154 * normalized.y + 0.0721 * normalized.z);

	if (color == 1 && gradient == 1)
		smooth_color = vec4(normalized, 1.0f);
	else if (color == 1 && gradient == 0)
		smooth_color = vec4(mod(position, 0.8f), 1.0f);
	else if (color == 0 && gradient == 1)
		smooth_color = vec4(grey, grey, grey, 1.0f);
	else
		smooth_color = vec4(mod(position.y, 0.8f), mod(position.y, 0.8f), mod(position.y, 0.8f), 1.0f);
	flat_color = smooth_color;
	tex_coordinates = vec2((position.x + position.z), position.y * 2);
}