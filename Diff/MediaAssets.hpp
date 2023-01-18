#ifndef UE4SS_SDK_MediaAssets_HPP
#define UE4SS_SDK_MediaAssets_HPP

#include "MediaAssets_enums.hpp"

struct FMediaCaptureDevice
{
    FText DisplayName;
    FString URL;

};

struct FMediaSoundComponentSpectralData
{
    float FrequencyHz;
    float Magnitude;

};

class UBaseMediaSource : public UMediaSource
{
    FName PlayerName;

};

class UFileMediaSource : public UBaseMediaSource
{
    FString FilePath;
    bool PrecacheFile;

    void SetFilePath(FString Path);
};

class UMediaBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{

    void EnumerateWebcamCaptureDevices(TArray<FMediaCaptureDevice>& OutDevices, int32 Filter);
    void EnumerateVideoCaptureDevices(TArray<FMediaCaptureDevice>& OutDevices, int32 Filter);
    void EnumerateAudioCaptureDevices(TArray<FMediaCaptureDevice>& OutDevices, int32 Filter);
};

class UMediaComponent : public UActorComponent
{
    class UMediaTexture* MediaTexture;
    class UMediaPlayer* MediaPlayer;

    class UMediaTexture* GetMediaTexture();
    class UMediaPlayer* GetMediaPlayer();
};

class UMediaPlayer : public UObject
{
    FMediaPlayerOnEndReached OnEndReached;
    void OnMediaPlayerMediaEvent();
    FMediaPlayerOnMediaClosed OnMediaClosed;
    void OnMediaPlayerMediaEvent();
    FMediaPlayerOnMediaOpened OnMediaOpened;
    void OnMediaPlayerMediaOpened(FString OpenedUrl);
    FMediaPlayerOnMediaOpenFailed OnMediaOpenFailed;
    void OnMediaPlayerMediaOpenFailed(FString FailedUrl);
    FMediaPlayerOnPlaybackResumed OnPlaybackResumed;
    void OnMediaPlayerMediaEvent();
    FMediaPlayerOnPlaybackSuspended OnPlaybackSuspended;
    void OnMediaPlayerMediaEvent();
    FMediaPlayerOnSeekCompleted OnSeekCompleted;
    void OnMediaPlayerMediaEvent();
    FMediaPlayerOnTracksChanged OnTracksChanged;
    void OnMediaPlayerMediaEvent();
    FTimespan CacheAhead;
    FTimespan CacheBehind;
    FTimespan CacheBehindGame;
    bool NativeAudioOut;
    bool PlayOnOpen;
    uint8 Shuffle;
    uint8 Loop;
    class UMediaPlaylist* Playlist;
    int32 PlaylistIndex;
    FTimespan TimeDelay;
    float HorizontalFieldOfView;
    float VerticalFieldOfView;
    FRotator ViewRotation;
    FGuid PlayerGuid;

    bool SupportsSeeking();
    bool SupportsScrubbing();
    bool SupportsRate(float Rate, bool Unthinned);
    bool SetViewRotation(const FRotator& Rotation, bool Absolute);
    bool SetViewField(float Horizontal, float Vertical, bool Absolute);
    bool SetVideoTrackFrameRate(int32 TrackIndex, int32 FormatIndex, float FrameRate);
    bool SetTrackFormat(EMediaPlayerTrack TrackType, int32 TrackIndex, int32 FormatIndex);
    void SetTimeDelay(FTimespan TimeDelay);
    bool SetRate(float Rate);
    bool SetNativeVolume(float Volume);
    void SetMediaOptions(const class UMediaSource* options);
    bool SetLooping(bool Looping);
    void SetDesiredPlayerName(FName PlayerName);
    void SetBlockOnTime(const FTimespan& Time);
    bool SelectTrack(EMediaPlayerTrack TrackType, int32 TrackIndex);
    bool Seek(const FTimespan& Time);
    bool Rewind();
    bool Reopen();
    bool Previous();
    void PlayAndSeek();
    bool Play();
    bool Pause();
    bool OpenUrl(FString URL);
    bool OpenSourceWithOptions(class UMediaSource* MediaSource, const FMediaPlayerOptions& options);
    void OpenSourceLatent(const class UObject* WorldContextObject, FLatentActionInfo LatentInfo, class UMediaSource* MediaSource, const FMediaPlayerOptions& options, bool& bSuccess);
    bool OpenSource(class UMediaSource* MediaSource);
    bool OpenPlaylistIndex(class UMediaPlaylist* InPlaylist, int32 Index);
    bool OpenPlaylist(class UMediaPlaylist* InPlaylist);
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
    FString GetVideoTrackType(int32 TrackIndex, int32 FormatIndex);
    FFloatRange GetVideoTrackFrameRates(int32 TrackIndex, int32 FormatIndex);
    float GetVideoTrackFrameRate(int32 TrackIndex, int32 FormatIndex);
    FIntPoint GetVideoTrackDimensions(int32 TrackIndex, int32 FormatIndex);
    float GetVideoTrackAspectRatio(int32 TrackIndex, int32 FormatIndex);
    float GetVerticalFieldOfView();
    FString GetUrl();
    FString GetTrackLanguage(EMediaPlayerTrack TrackType, int32 TrackIndex);
    int32 GetTrackFormat(EMediaPlayerTrack TrackType, int32 TrackIndex);
    FText GetTrackDisplayName(EMediaPlayerTrack TrackType, int32 TrackIndex);
    class UMediaTimeStampInfo* GetTimeStamp();
    FTimespan GetTimeDelay();
    FTimespan GetTime();
    void GetSupportedRates(TArray<FFloatRange>& OutRates, bool Unthinned);
    int32 GetSelectedTrack(EMediaPlayerTrack TrackType);
    float GetRate();
    int32 GetPlaylistIndex();
    class UMediaPlaylist* GetPlaylist();
    FName GetPlayerName();
    int32 GetNumTracks(EMediaPlayerTrack TrackType);
    int32 GetNumTrackFormats(EMediaPlayerTrack TrackType, int32 TrackIndex);
    FText GetMediaName();
    float GetHorizontalFieldOfView();
    FTimespan GetDuration();
    FName GetDesiredPlayerName();
    FString GetAudioTrackType(int32 TrackIndex, int32 FormatIndex);
    int32 GetAudioTrackSampleRate(int32 TrackIndex, int32 FormatIndex);
    int32 GetAudioTrackChannels(int32 TrackIndex, int32 FormatIndex);
    void Close();
    bool CanPlayUrl(FString URL);
    bool CanPlaySource(class UMediaSource* MediaSource);
    bool CanPause();
};

class UMediaPlaylist : public UObject
{
    TArray<class UMediaSource*> Items;

    bool Replace(int32 Index, class UMediaSource* Replacement);
    bool RemoveAt(int32 Index);
    bool Remove(class UMediaSource* MediaSource);
    int32 Num();
    void Insert(class UMediaSource* MediaSource, int32 Index);
    class UMediaSource* GetRandom(int32& OutIndex);
    class UMediaSource* GetPrevious(int32& InOutIndex);
    class UMediaSource* GetNext(int32& InOutIndex);
    class UMediaSource* Get(int32 Index);
    bool AddUrl(FString URL);
    bool AddFile(FString FilePath);
    bool Add(class UMediaSource* MediaSource);
};

class UMediaSoundComponent : public USynthComponent
{
    EMediaSoundChannels Channels;
    bool DynamicRateAdjustment;
    float RateAdjustmentFactor;
    FFloatRange RateAdjustmentRange;
    class UMediaPlayer* MediaPlayer;

    void SetSpectralAnalysisSettings(TArray<float> InFrequenciesToAnalyze, EMediaSoundComponentFFTSize InFFTSize);
    void SetMediaPlayer(class UMediaPlayer* NewMediaPlayer);
    void SetEnvelopeFollowingsettings(int32 AttackTimeMsec, int32 ReleaseTimeMsec);
    void SetEnableSpectralAnalysis(bool bInSpectralAnalysisEnabled);
    void SetEnableEnvelopeFollowing(bool bInEnvelopeFollowing);
    TArray<FMediaSoundComponentSpectralData> GetSpectralData();
    TArray<FMediaSoundComponentSpectralData> GetNormalizedSpectralData();
    class UMediaPlayer* GetMediaPlayer();
    float GetEnvelopeValue();
    bool BP_GetAttenuationSettingsToApply(FSoundAttenuationSettings& OutAttenuationSettings);
};

class UMediaSource : public UObject
{

    bool Validate();
    void SetMediaOptionString(const FName& Key, FString Value);
    void SetMediaOptionInt64(const FName& Key, int64 Value);
    void SetMediaOptionFloat(const FName& Key, float Value);
    void SetMediaOptionBool(const FName& Key, bool Value);
    FString GetUrl();
};

class UMediaTexture : public UTexture
{
    TEnumAsByte<TextureAddress> AddressX;
    TEnumAsByte<TextureAddress> AddressY;
    bool AutoClear;
    FLinearColor ClearColor;
    bool EnableGenMips;
    uint8 NumMips;
    bool NewStyleOutput;
    TEnumAsByte<MediaTextureOutputFormat> OutputFormat;
    float CurrentAspectRatio;
    TEnumAsByte<MediaTextureOrientation> CurrentOrientation;
    class UMediaPlayer* MediaPlayer;

    void SetMediaPlayer(class UMediaPlayer* NewMediaPlayer);
    int32 GetWidth();
    int32 GetTextureNumMips();
    class UMediaPlayer* GetMediaPlayer();
    int32 GetHeight();
    float GetAspectRatio();
};

class UMediaTimeStampInfo : public UObject
{
    FTimespan Time;
    int64 SequenceIndex;

};

class UPlatformMediaSource : public UMediaSource
{
    class UMediaSource* MediaSource;

};

class UStreamMediaSource : public UBaseMediaSource
{
    FString StreamUrl;

};

class UTimeSynchronizableMediaSource : public UBaseMediaSource
{
    bool bUseTimeSynchronization;
    int32 FrameDelay;
    double TimeDelay;

};

#endif
