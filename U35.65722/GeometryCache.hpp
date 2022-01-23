#ifndef UE4SS_SDK_GeometryCache_HPP
#define UE4SS_SDK_GeometryCache_HPP

class UGeometryCache : public UObject
{
    TArray<class UMaterialInterface*> Materials;
    TArray<class UGeometryCacheTrack*> Tracks;
    int32 StartFrame;
    int32 EndFrame;
};

class AGeometryCacheActor : public AActor
{
    class UGeometryCacheComponent* GeometryCacheComponent;

    class UGeometryCacheComponent* GetGeometryCacheComponent();
};

class UGeometryCacheCodecBase : public UObject
{
    TArray<int32> TopologyRanges;
};

class UGeometryCacheCodecRaw : public UGeometryCacheCodecBase
{
    int32 DummyProperty;
};

class UGeometryCacheCodecV1 : public UGeometryCacheCodecBase
{
};

class UGeometryCacheComponent : public UMeshComponent
{
    class UGeometryCache* GeometryCache;
    bool bRunning;
    bool bLooping;
    float StartTimeOffset;
    float PlaybackSpeed;
    int32 NumTracks;
    float ElapsedTime;
    float Duration;
    bool bManualTick;

    void TickAtThisTime(const float Time, bool bInIsRunning, bool bInBackwards, bool bInIsLooping);
    void Stop();
    void SetStartTimeOffset(const float NewStartTimeOffset);
    void SetPlaybackSpeed(const float NewPlaybackSpeed);
    void SetLooping(const bool bNewLooping);
    bool SetGeometryCache(class UGeometryCache* NewGeomCache);
    void PlayReversedFromEnd();
    void PlayReversed();
    void PlayFromStart();
    void Play();
    void Pause();
    bool IsPlayingReversed();
    bool IsPlaying();
    bool IsLooping();
    float GetStartTimeOffset();
    float GetPlaybackSpeed();
    float GetPlaybackDirection();
    int32 GetNumberOfFrames();
    float GetDuration();
    float GetAnimationTime();
};

class UGeometryCacheTrack : public UObject
{
    float Duration;
};

struct FGeometryCacheMeshData
{
};

class UDEPRECATED_GeometryCacheTrack_FlipbookAnimation : public UGeometryCacheTrack
{
    uint32 NumMeshSamples;

    void AddMeshSample(const FGeometryCacheMeshData& MeshData, const float SampleTime);
};

class UGeometryCacheTrackStreamable : public UGeometryCacheTrack
{
    class UGeometryCacheCodecBase* Codec;
    float StartSampleTime;
};

class UDEPRECATED_GeometryCacheTrack_TransformAnimation : public UGeometryCacheTrack
{

    void SetMesh(const FGeometryCacheMeshData& NewMeshData);
};

class UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation : public UGeometryCacheTrack
{

    void SetMesh(const FGeometryCacheMeshData& NewMeshData);
};

struct FTrackRenderData
{
};

struct FGeometryCacheVertexInfo
{
};

struct FGeometryCacheMeshBatchInfo
{
};

#endif
