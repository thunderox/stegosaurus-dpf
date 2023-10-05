
#ifndef DISTRHO_PLUGIN_INFO_H_INCLUDED
#define DISTRHO_PLUGIN_INFO_H_INCLUDED

#define DISTRHO_PLUGIN_NAME  "stegosaurus"
#define DISTRHO_PLUGIN_URI   "http://thunderox.com/stegosaurus"

#define DISTRHO_PLUGIN_NUM_INPUTS   0
#define DISTRHO_PLUGIN_NUM_OUTPUTS  4
#define DISTRHO_PLUGIN_IS_RT_SAFE   1
#define DISTRHO_PLUGIN_IS_SYNTH 1
#define DISTRHO_PLUGIN_WANT_PROGRAMS 1
#define DISTRHO_PLUGIN_WANT_TIMEPOS 1

#define DISTRHO_PLUGIN_HAS_UI 1
#define DISTRHO_UI_USE_CAIRO 1
#define DISTRHO_UI_URI DISTRHO_PLUGIN_URI "#UI"
#define DISTRHO_UI_USE_NANOVG 0

enum Parameters {
	stegosaurus_MIDI_IN,
	stegosaurus_OUT_ONE,
	stegosaurus_OUT_TWO,
	stegosaurus_OUT_THREE,
	stegosaurus_OUT_FOUR,
	stegosaurus_VOLUME,

	stegosaurus_KICK_OSC1_ACTIVE,
	stegosaurus_KICK_OSC1_NOISE,
	stegosaurus_KICK_OSC1_PITCH,
	stegosaurus_KICK_OSC1_AMP_ATTACK,
	stegosaurus_KICK_OSC1_AMP_DECAY,
	stegosaurus_KICK_OSC1_AMP_SUSTAIN,
	stegosaurus_KICK_OSC1_AMP_RELEASE,
	stegosaurus_KICK_OSC1_PITCH_ATTACK,
	stegosaurus_KICK_OSC1_PITCH_DECAY,
	stegosaurus_KICK_OSC1_PITCH_SUSTAIN,
	stegosaurus_KICK_OSC1_PITCH_RELEASE,
	stegosaurus_KICK_OSC1_VOLUME,

	stegosaurus_KICK_OSC2_ACTIVE,
	stegosaurus_KICK_OSC2_NOISE,
	stegosaurus_KICK_OSC2_PITCH,
	stegosaurus_KICK_OSC2_AMP_ATTACK,
	stegosaurus_KICK_OSC2_AMP_DECAY,
	stegosaurus_KICK_OSC2_AMP_SUSTAIN,
	stegosaurus_KICK_OSC2_AMP_RELEASE,
	stegosaurus_KICK_OSC2_PITCH_ATTACK,
	stegosaurus_KICK_OSC2_PITCH_DECAY,
	stegosaurus_KICK_OSC2_PITCH_SUSTAIN,
	stegosaurus_KICK_OSC2_PITCH_RELEASE,
	stegosaurus_KICK_OSC2_VOLUME,


	stegosaurus_SNARE_OSC1_ACTIVE,
	stegosaurus_SNARE_OSC1_NOISE,
	stegosaurus_SNARE_OSC1_PITCH,
	stegosaurus_SNARE_OSC1_AMP_ATTACK,
	stegosaurus_SNARE_OSC1_AMP_DECAY,
	stegosaurus_SNARE_OSC1_AMP_SUSTAIN,
	stegosaurus_SNARE_OSC1_AMP_RELEASE,
	stegosaurus_SNARE_OSC1_PITCH_ATTACK,
	stegosaurus_SNARE_OSC1_PITCH_DECAY,
	stegosaurus_SNARE_OSC1_PITCH_SUSTAIN,
	stegosaurus_SNARE_OSC1_PITCH_RELEASE,
	stegosaurus_SNARE_OSC1_VOLUME,

	stegosaurus_SNARE_OSC2_ACTIVE,
	stegosaurus_SNARE_OSC2_NOISE,
	stegosaurus_SNARE_OSC2_PITCH,
	stegosaurus_SNARE_OSC2_AMP_ATTACK,
	stegosaurus_SNARE_OSC2_AMP_DECAY,
	stegosaurus_SNARE_OSC2_AMP_SUSTAIN,
	stegosaurus_SNARE_OSC2_AMP_RELEASE,
	stegosaurus_SNARE_OSC2_PITCH_ATTACK,
	stegosaurus_SNARE_OSC2_PITCH_DECAY,
	stegosaurus_SNARE_OSC2_PITCH_SUSTAIN,
	stegosaurus_SNARE_OSC2_PITCH_RELEASE,
	stegosaurus_SNARE_OSC2_VOLUME,


	stegosaurus_CLHAT_OSC1_ACTIVE,
	stegosaurus_CLHAT_OSC1_NOISE,
	stegosaurus_CLHAT_OSC1_PITCH,
	stegosaurus_CLHAT_OSC1_AMP_ATTACK,
	stegosaurus_CLHAT_OSC1_AMP_DECAY,
	stegosaurus_CLHAT_OSC1_AMP_SUSTAIN,
	stegosaurus_CLHAT_OSC1_AMP_RELEASE,
	stegosaurus_CLHAT_OSC1_PITCH_ATTACK,
	stegosaurus_CLHAT_OSC1_PITCH_DECAY,
	stegosaurus_CLHAT_OSC1_PITCH_SUSTAIN,
	stegosaurus_CLHAT_OSC1_PITCH_RELEASE,
	stegosaurus_CLHAT_OSC1_VOLUME,

	stegosaurus_CLHAT_OSC2_ACTIVE,
	stegosaurus_CLHAT_OSC2_NOISE,
	stegosaurus_CLHAT_OSC2_PITCH,
	stegosaurus_CLHAT_OSC2_AMP_ATTACK,
	stegosaurus_CLHAT_OSC2_AMP_DECAY,
	stegosaurus_CLHAT_OSC2_AMP_SUSTAIN,
	stegosaurus_CLHAT_OSC2_AMP_RELEASE,
	stegosaurus_CLHAT_OSC2_PITCH_ATTACK,
	stegosaurus_CLHAT_OSC2_PITCH_DECAY,
	stegosaurus_CLHAT_OSC2_PITCH_SUSTAIN,
	stegosaurus_CLHAT_OSC2_PITCH_RELEASE,
	stegosaurus_CLHAT_OSC2_VOLUME,


	stegosaurus_OPHAT_OSC1_ACTIVE,
	stegosaurus_OPHAT_OSC1_NOISE,
	stegosaurus_OPHAT_OSC1_PITCH,
	stegosaurus_OPHAT_OSC1_AMP_ATTACK,
	stegosaurus_OPHAT_OSC1_AMP_DECAY,
	stegosaurus_OPHAT_OSC1_AMP_SUSTAIN,
	stegosaurus_OPHAT_OSC1_AMP_RELEASE,
	stegosaurus_OPHAT_OSC1_PITCH_ATTACK,
	stegosaurus_OPHAT_OSC1_PITCH_DECAY,
	stegosaurus_OPHAT_OSC1_PITCH_SUSTAIN,
	stegosaurus_OPHAT_OSC1_PITCH_RELEASE,
	stegosaurus_OPHAT_OSC1_VOLUME,

	stegosaurus_OPHAT_OSC2_ACTIVE,
	stegosaurus_OPHAT_OSC2_NOISE,
	stegosaurus_OPHAT_OSC2_PITCH,
	stegosaurus_OPHAT_OSC2_AMP_ATTACK,
	stegosaurus_OPHAT_OSC2_AMP_DECAY,
	stegosaurus_OPHAT_OSC2_AMP_SUSTAIN,
	stegosaurus_OPHAT_OSC2_AMP_RELEASE,
	stegosaurus_OPHAT_OSC2_PITCH_ATTACK,
	stegosaurus_OPHAT_OSC2_PITCH_DECAY,
	stegosaurus_OPHAT_OSC2_PITCH_SUSTAIN,
	stegosaurus_OPHAT_OSC2_PITCH_RELEASE,
	stegosaurus_OPHAT_OSC2_VOLUME,
	
	stegosaurus_OUT_SELECTOR_1,
	stegosaurus_OUT_SELECTOR_2,
	stegosaurus_OUT_SELECTOR_3,
	stegosaurus_OUT_SELECTOR_4,

	kParameterBufferSize,
	kParameterCount
};

#endif
