# UnrealMimic

[Youtube preview video](https://youtu.be/TqPx2z758ig)

Text-to-Speech plugin for UE4. Uses [Mimic library](https://github.com/MycroftAI/mimic) which is basically the same as Carnegie Mellon University's [Flite](http://www.festvox.org/flite/). Uses .flitevox files which should be relatively easy to find for free (e.g. from various university sites or [here](https://github.com/MycroftAI/mimic/tree/master/voices)) or train from your own recording with [Festvox](http://festvox.org/index.html).

How to use:
 * Copy plugins directory to your own project (Binary is 4.13, x64. I might not update it ever, we'll see)
 * Import .flitevox voice file or several through your UE4 content browser
 * Use function Say in BP or C++ to generate sound wave that you can playback like other sounds
 
![Imgur](http://i.imgur.com/DHnS3s1.png)

Limitations:
 * Highly experimental. Use at own risk.
 * Voice files are not packaged correctly. Instead they are loaded at runtime which requires that the filepath stays the same. This can easily be fixed if you would be interested in packaging anything that uses this (See UMimicVoice::Serialize).
 * Only windows binary & build configuration. Porting to Linux & Mac should be trivial. No idea about mobile.
 * Sometimes the sound clip just ends halfway through
 * Even with the best voices possible the quality won't be anywhere near good commercial TTS systems.
 * Remember that some free voice libraries might have restrictive licenses. (e.g. GPL)
 * I include the mimic library in Plugins/UnrealMimic/Source/ThirdParty/Mimic since I had to make some changes to get things working (mostly Windows building stuff & UE4 build)