#version 410 core

uniform int interpolate;
uniform int texturing;
uniform float ambient_light;
uniform sampler2D kitten_texture;
uniform sampler2D banane_texture;

smooth in vec4 smooth_color;
flat in vec4 flat_color;
in vec2 tex_coordinates;

out vec4 FragColor;

void main()
{
	if (texturing == 1)
		FragColor = texture(kitten_texture, tex_coordinates);
	else if (texturing == 2)
		FragColor = texture(banane_texture, tex_coordinates);
	else if (interpolate == 1)
		FragColor = smooth_color;
	else
		FragColor = flat_color;
	FragColor *= ambient_light;
}