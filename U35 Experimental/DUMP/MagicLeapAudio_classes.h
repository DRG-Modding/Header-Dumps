// Class MagicLeapAudio.MagicLeapAudioFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UMagicLeapAudioFunctionLibrary : UBlueprintFunctionLibrary {

	UFUNCTION(BlueprintCallable) bool SetOnAudioJackUnpluggedDelegate(FDelegate ResultDelegate);
	UFUNCTION(BlueprintCallable) bool SetOnAudioJackPluggedDelegate(FDelegate ResultDelegate);
	UFUNCTION(BlueprintCallable) bool SetMicMute(bool IsMuted);
	UFUNCTION(BlueprintCallable) bool IsMicMuted();
};

