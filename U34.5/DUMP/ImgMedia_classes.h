// Class ImgMedia.ImgMediaSource
// Size: 0xb0 (Inherited: 0x88)
struct UImgMediaSource : UBaseMediaSource {
	FFrameRate FrameRateOverride; // 0x88(0x08)
	FString ProxyOverride; // 0x90(0x10)
	FDirectoryPath SequencePath; // 0xa0(0x10)

	void SetSequencePath(FString Path);
	FString GetSequencePath();
	void GetProxies(TArray<FString> OutProxies);
};

