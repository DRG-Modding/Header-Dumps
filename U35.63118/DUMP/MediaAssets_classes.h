// Class MediaAssets.MediaSource
// Size: 0x80 (Inherited: 0x28)
struct UMediaSource : UObject {

	bool Validate();
	void SetMediaOptionString(FName Key, FString Value);
	void SetMediaOptionInt64(FName Key, int64_t Value);
	void SetMediaOptionFloat(FName Key, float Value);
	void SetMediaOptionBool(FName Key, bool Value);
	FString GetUrl();
};

// Class MediaAssets.BaseMediaSource
// Size: 0x88 (Inherited: 0x80)
struct UBaseMediaSource : UMediaSource {
	FName PlayerName; // 0x80(0x08)
};

// Class MediaAssets.FileMediaSource
// Size: 0xb0 (Inherited: 0x88)
struct UFileMediaSource : UBaseMediaSource {
	FString FilePath; // 0x88(0x10)
	bool PrecacheFile; // 0x98(0x01)

	void SetFilePath(FString Path);
};

// Class MediaAssets.MediaBlueprintFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UMediaBlueprintFunctionLibrary : UBlueprintFunctionLibrary {

	void EnumerateWebcamCaptureDevices(TArray<FMediaCaptureDevice> OutDevices, int32_t Filter);
	void EnumerateVideoCaptureDevices(TArray<FMediaCaptureDevice> OutDevices, int32_t Filter);
	void EnumerateAudioCaptureDevices(TArray<FMediaCaptureDevice> OutDevices, int32_t Filter);
};

// Class MediaAssets.MediaComponent
// Size: 0xc0 (Inherited: 0xb0)
struct UMediaComponent : UActorComponent {
	UMediaTexture* MediaTexture; // 0xb0(0x08)
	UMediaPlayer* MediaPlayer; // 0xb8(0x08)

	UMediaTexture* GetMediaTexture();
	UMediaPlayer* GetMediaPlayer();
};

// Class MediaAssets.MediaPlayer
// Size: 0x138 (Inherited: 0x28)
struct UMediaPlayer : UObject {
	FMulticastInlineDelegate OnEndReached; // 0x28(0x10)
	FMulticastInlineDelegate OnMediaClosed; // 0x38(0x10)
	FMulticastInlineDelegate OnMediaOpened; // 0x48(0x10)
	FMulticastInlineDelegate OnMediaOpenFailed; // 0x58(0x10)
	FMulticastInlineDelegate OnPlaybackResumed; // 0x68(0x10)
	FMulticastInlineDelegate OnPlaybackSuspended; // 0x78(0x10)
	FMulticastInlineDelegate OnSeekCompleted; // 0x88(0x10)
	FMulticastInlineDelegate OnTracksChanged; // 0x98(0x10)
	FTimespan CacheAhead; // 0xa8(0x08)
	FTimespan CacheBehind; // 0xb0(0x08)
	FTimespan CacheBehindGame; // 0xb8(0x08)
	bool NativeAudioOut; // 0xc0(0x01)
	bool PlayOnOpen; // 0xc1(0x01)
	char Shuffle : 1; // 0xc4(0x01)
	char Loop : 1; // 0xc4(0x01)
	UMediaPlaylist* Playlist; // 0xc8(0x08)
	int32_t PlaylistIndex; // 0xd0(0x04)
	FTimespan TimeDelay; // 0xd8(0x08)
	float HorizontalFieldOfView; // 0xe0(0x04)
	float VerticalFieldOfView; // 0xe4(0x04)
	FRotator ViewRotation; // 0xe8(0x0c)
	FGuid PlayerGuid; // 0x120(0x10)

	bool SupportsSeeking();
	bool SupportsScrubbing();
	bool SupportsRate(float Rate, bool Unthinned);
	bool SetViewRotation(FRotator Rotation, bool Absolute);
	bool SetViewField(float Horizontal, float Vertical, bool Absolute);
	bool SetVideoTrackFrameRate(int32_t TrackIndex, int32_t FormatIndex, float FrameRate);
	bool SetTrackFormat(enum class EMediaPlayerTrack TrackType, int32_t TrackIndex, int32_t FormatIndex);
	void SetTimeDelay(FTimespan TimeDelay);
	bool SetRate(float Rate);
	bool SetNativeVolume(float Volume);
	void SetMediaOptions(UMediaSource* options);
	bool SetLooping(bool Looping);
	void SetDesiredPlayerName(FName PlayerName);
	void SetBlockOnTime(FTimespan Time);
	bool SelectTrack(enum class EMediaPlayerTrack TrackType, int32_t TrackIndex);
	bool Seek(FTimespan Time);
	bool Rewind();
	bool Reopen();
	bool Previous();
	void PlayAndSeek();
	bool Play();
	bool Pause();
	bool OpenUrl(FString URL);
	bool OpenSourceWithOptions(UMediaSource* MediaSource, FMediaPlayerOptions options);
	void OpenSourceLatent(UObject* WorldContextObject, FLatentActionInfo LatentInfo, UMediaSource* MediaSource, FMediaPlayerOptions options, bool bSuccess);
	bool OpenSource(UMediaSource* MediaSource);
	bool OpenPlaylistIndex(UMediaPlaylist* InPlaylist, int32_t Index);
	bool OpenPlaylist(UMediaPlaylist* InPlaylist);
	bool OpenFile(FString FilePath);
	bool Next();
	bool IsReady();
	bool IsPreparing();
	bool IsPlaying();
	bool IsPaused();
	bool IsLooping();
	bool IsConnecting();
	bool IsClosed();
	bool IsBuffering();
	bool HasError();
	FRotator GetViewRotation();
	FString GetVideoTrackType(int32_t TrackIndex, int32_t FormatIndex);
	FFloatRange GetVideoTrackFrameRates(int32_t TrackIndex, int32_t FormatIndex);
	float GetVideoTrackFrameRate(int32_t TrackIndex, int32_t FormatIndex);
	FIntPoint GetVideoTrackDimensions(int32_t TrackIndex, int32_t FormatIndex);
	float GetVideoTrackAspectRatio(int32_t TrackIndex, int32_t FormatIndex);
	float GetVerticalFieldOfView();
	FString GetUrl();
	FString GetTrackLanguage(enum class EMediaPlayerTrack TrackType, int32_t TrackIndex);
	int32_t GetTrackFormat(enum class EMediaPlayerTrack TrackType, int32_t TrackIndex);
	FText GetTrackDisplayName(enum class EMediaPlayerTrack TrackType, int32_t TrackIndex);
	FTimespan GetTimeDelay();
	FTimespan GetTime();
	void GetSupportedRates(TArray<FFloatRange> OutRates, bool Unthinned);
	int32_t GetSelectedTrack(enum class EMediaPlayerTrack TrackType);
	float GetRate();
	int32_t GetPlaylistIndex();
	UMediaPlaylist* GetPlaylist();
	FName GetPlayerName();
	int32_t GetNumTracks(enum class EMediaPlayerTrack TrackType);
	int32_t GetNumTrackFormats(enum class EMediaPlayerTrack TrackType, int32_t TrackIndex);
	FText GetMediaName();
	FTimespan GetLastVideoSampleProcessedTime();
	FTimespan GetLastAudioSampleProcessedTime();
	float GetHorizontalFieldOfView();
	FTimespan GetDuration();
	FName GetDesiredPlayerName();
	FString GetAudioTrackType(int32_t TrackIndex, int32_t FormatIndex);
	int32_t GetAudioTrackSampleRate(int32_t TrackIndex, int32_t FormatIndex);
	int32_t GetAudioTrackChannels(int32_t TrackIndex, int32_t FormatIndex);
	void Close();
	bool CanPlayUrl(FString URL);
	bool CanPlaySource(UMediaSource* MediaSource);
	bool CanPause();
};

// Class MediaAssets.MediaPlaylist
// Size: 0x38 (Inherited: 0x28)
struct UMediaPlaylist : UObject {
	TArray<UMediaSource*> Items; // 0x28(0x10)

	bool Replace(int32_t Index, UMediaSource* Replacement);
	bool RemoveAt(int32_t Index);
	bool Remove(UMediaSource* MediaSource);
	int32_t Num();
	void Insert(UMediaSource* MediaSource, int32_t Index);
	UMediaSource* GetRandom(int32_t OutIndex);
	UMediaSource* GetPrevious(int32_t InOutIndex);
	UMediaSource* GetNext(int32_t InOutIndex);
	UMediaSource* Get(int32_t Index);
	bool AddUrl(FString URL);
	bool AddFile(FString FilePath);
	bool Add(UMediaSource* MediaSource);
};

// Class MediaAssets.MediaSoundComponent
// Size: 0x8d0 (Inherited: 0x6d0)
struct UMediaSoundComponent : USynthComponent {
	enum class EMediaSoundChannels Channels; // 0x6d0(0x04)
	bool DynamicRateAdjustment; // 0x6d4(0x01)
	float RateAdjustmentFactor; // 0x6d8(0x04)
	FFloatRange RateAdjustmentRange; // 0x6dc(0x10)
	UMediaPlayer* MediaPlayer; // 0x6f0(0x08)

	void SetSpectralAnalysisSettings(TArray<float> InFrequenciesToAnalyze, enum class EMediaSoundComponentFFTSize InFFTSize);
	void SetMediaPlayer(UMediaPlayer* NewMediaPlayer);
	void SetEnvelopeFollowingsettings(int32_t AttackTimeMsec, int32_t ReleaseTimeMsec);
	void SetEnableSpectralAnalysis(bool bInSpectralAnalysisEnabled);
	void SetEnableEnvelopeFollowing(bool bInEnvelopeFollowing);
	TArray<FMediaSoundComponentSpectralData> GetSpectralData();
	UMediaPlayer* GetMediaPlayer();
	float GetEnvelopeValue();
	bool BP_GetAttenuationSettingsToApply(FSoundAttenuationSettings OutAttenuationSettings);
};

// Class MediaAssets.MediaTexture
// Size: 0x188 (Inherited: 0xb8)
struct UMediaTexture : UTexture {
	enum class TextureAddress AddressX; // 0xb8(0x01)
	enum class TextureAddress AddressY; // 0xb9(0x01)
	bool AutoClear; // 0xba(0x01)
	FLinearColor ClearColor; // 0xbc(0x10)
	bool EnableGenMips; // 0xcc(0x01)
	char NumMips; // 0xcd(0x01)
	UMediaPlayer* MediaPlayer; // 0xd0(0x08)

	void SetMediaPlayer(UMediaPlayer* NewMediaPlayer);
	int32_t GetWidth();
	UMediaPlayer* GetMediaPlayer();
	int32_t GetHeight();
	float GetAspectRatio();
};

// Class MediaAssets.PlatformMediaSource
// Size: 0x88 (Inherited: 0x80)
struct UPlatformMediaSource : UMediaSource {
	UMediaSource* MediaSource; // 0x80(0x08)
};

// Class MediaAssets.StreamMediaSource
// Size: 0x98 (Inherited: 0x88)
struct UStreamMediaSource : UBaseMediaSource {
	FString StreamUrl; // 0x88(0x10)
};

// Class MediaAssets.TimeSynchronizableMediaSource
// Size: 0x98 (Inherited: 0x88)
struct UTimeSynchronizableMediaSource : UBaseMediaSource {
	bool bUseTimeSynchronization; // 0x88(0x01)
	int32_t FrameDelay; // 0x8c(0x04)
	double TimeDelay; // 0x90(0x08)
};

