// Class MagicLeapAudio.MagicLeapAudioFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UMagicLeapAudioFunctionLibrary : UBlueprintFunctionLibrary {

	bool SetOnAudioJackUnpluggedDelegate(FDelegate ResultDelegate);
	bool SetOnAudioJackPluggedDelegate(FDelegate ResultDelegate);
	bool SetMicMute(bool IsMuted);
	bool IsMicMuted();
};

