// Class ImgMedia.ImgMediaSource
// Size: 0xb0 (Inherited: 0x88)
struct UImgMediaSource : UBaseMediaSource {
	struct FFrameRate FrameRateOverride; // 0x88(0x08)
	struct FString ProxyOverride; // 0x90(0x10)
	struct FDirectoryPath SequencePath; // 0xa0(0x10)

	void SetSequencePath(struct FString Path); // Function ImgMedia.ImgMediaSource.SetSequencePath
	struct FString GetSequencePath(); // Function ImgMedia.ImgMediaSource.GetSequencePath
	void GetProxies(struct TArray<struct FString> OutProxies); // Function ImgMedia.ImgMediaSource.GetProxies
};

