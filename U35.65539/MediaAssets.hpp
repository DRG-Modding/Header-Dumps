#ifndef UE4SS_SDK_MediaAssets_HPP
#define UE4SS_SDK_MediaAssets_HPP

#include "MediaAssets_enums.hpp"

class UMediaSource : UObject
{

    bool Validate();
    void SetMediaOptionString(const FName& Key, FString Value);
    void SetMediaOptionInt64(const FName& Key, int64 Value);
    void SetMediaOptionFloat(const FName& Key, float Value);
    void SetMediaOptionBool(const FName& Key, bool Value);
    FString GetUrl();
}

class UBaseMediaSource : UMediaSource
{
    FName PlayerName;
}

class UFileMediaSource : UBaseMediaSource
{
    FString FilePath;
    bool PrecacheFile;

    void SetFilePath(FString Path);
}

class UMediaBlueprintFunctionLibrary : UBlueprintFunctionLibrary
{

    void EnumerateWebcamCaptureDevices(TArray<FMediaCaptureDevice>& OutDevices, int32 Filter);
    void EnumerateVideoCaptureDevices(TArray<FMediaCaptureDevice>& OutDevices, int32 Filter);
    void EnumerateAudioCaptureDevices(TArray<FMediaCaptureDevice>& OutDevices, int32 Filter);
}

class UMediaComponent : UActorComponent
{
    UMediaTexture* MediaTexture;
    UMediaPlayer* MediaPlayer;

    UMediaTexture* GetMediaTexture();
    UMediaPlayer* GetMediaPlayer();
}

class UMediaPlayer : UObject
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
    UMediaPlaylist* Playlist;
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
    void SetMediaOptions(const UMediaSource* options);
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
    bool OpenSourceWithOptions(UMediaSource* MediaSource, const FMediaPlayerOptions& options);
    void OpenSourceLatent(const UObject* WorldContextObject, FLatentActionInfo LatentInfo, UMediaSource* MediaSource, const FMediaPlayerOptions& options, bool& bSuccess);
    bool OpenSource(UMediaSource* MediaSource);
    bool OpenPlaylistIndex(UMediaPlaylist* InPlaylist, int32 Index);
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
    FTimespan GetTimeDelay();
    FTimespan GetTime();
    void GetSupportedRates(TArray<FFloatRange>& OutRates, bool Unthinned);
    int32 GetSelectedTrack(EMediaPlayerTrack TrackType);
    float GetRate();
    int32 GetPlaylistIndex();
    UMediaPlaylist* GetPlaylist();
    FName GetPlayerName();
    int32 GetNumTracks(EMediaPlayerTrack TrackType);
    int32 GetNumTrackFormats(EMediaPlayerTrack TrackType, int32 TrackIndex);
    FText GetMediaName();
    FTimespan GetLastVideoSampleProcessedTime();
    FTimespan GetLastAudioSampleProcessedTime();
    float GetHorizontalFieldOfView();
    FTimespan GetDuration();
    FName GetDesiredPlayerName();
    FString GetAudioTrackType(int32 TrackIndex, int32 FormatIndex);
    int32 GetAudioTrackSampleRate(int32 TrackIndex, int32 FormatIndex);
    int32 GetAudioTrackChannels(int32 TrackIndex, int32 FormatIndex);
    void Close();
    bool CanPlayUrl(FString URL);
    bool CanPlaySource(UMediaSource* MediaSource);
    bool CanPause();
}

class UMediaPlaylist : UObject
{
    TArray<UMediaSource*> Items;

    bool Replace(int32 Index, UMediaSource* Replacement);
    bool RemoveAt(int32 Index);
    bool Remove(UMediaSource* MediaSource);
    int32 Num();
    void Insert(UMediaSource* MediaSource, int32 Index);
    UMediaSource* GetRandom(int32& OutIndex);
    UMediaSource* GetPrevious(int32& InOutIndex);
    UMediaSource* GetNext(int32& InOutIndex);
    UMediaSource* Get(int32 Index);
    bool AddUrl(FString URL);
    bool AddFile(FString FilePath);
    bool Add(UMediaSource* MediaSource);
}

class UMediaSoundComponent : USynthComponent
{
    EMediaSoundChannels Channels;
    bool DynamicRateAdjustment;
    float RateAdjustmentFactor;
    FFloatRange RateAdjustmentRange;
    UMediaPlayer* MediaPlayer;

    void SetSpectralAnalysisSettings(TArray<float> InFrequenciesToAnalyze, EMediaSoundComponentFFTSize InFFTSize);
    void SetMediaPlayer(UMediaPlayer* NewMediaPlayer);
    void SetEnvelopeFollowingsettings(int32 AttackTimeMsec, int32 ReleaseTimeMsec);
    void SetEnableSpectralAnalysis(bool bInSpectralAnalysisEnabled);
    void SetEnableEnvelopeFollowing(bool bInEnvelopeFollowing);
    TArray<FMediaSoundComponentSpectralData> GetSpectralData();
    UMediaPlayer* GetMediaPlayer();
    float GetEnvelopeValue();
    bool BP_GetAttenuationSettingsToApply(FSoundAttenuationSettings& OutAttenuationSettings);
}

class UMediaTexture : UTexture
{
    TEnumAsByte<TextureAddress> AddressX;
    TEnumAsByte<TextureAddress> AddressY;
    bool AutoClear;
    FLinearColor ClearColor;
    bool EnableGenMips;
    uint8 NumMips;
    UMediaPlayer* MediaPlayer;

    void SetMediaPlayer(UMediaPlayer* NewMediaPlayer);
    int32 GetWidth();
    UMediaPlayer* GetMediaPlayer();
    int32 GetHeight();
    float GetAspectRatio();
}

class UPlatformMediaSource : UMediaSource
{
    UMediaSource* MediaSource;
}

class UStreamMediaSource : UBaseMediaSource
{
    FString StreamUrl;
}

class UTimeSynchronizableMediaSource : UBaseMediaSource
{
    bool bUseTimeSynchronization;
    int32 FrameDelay;
    double TimeDelay;
}

struct UMediaCaptureDevice
{
    FText DisplayName;
    FString URL;
}

struct UMediaSoundComponentSpectralData
{
    float FrequencyHz;
    float Magnitude;
}

#endif
