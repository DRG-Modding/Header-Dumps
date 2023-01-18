#ifndef UE4SS_SDK_CinematicCamera_HPP
#define UE4SS_SDK_CinematicCamera_HPP

#include "CinematicCamera_enums.hpp"

struct FCameraFilmbackSettings
{
    float SensorWidth;
    float SensorHeight;
    float SensorAspectRatio;

};

struct FCameraFocusSettings
{
    ECameraFocusMethod FocusMethod;
    float ManualFocusDistance;
    FCameraTrackingFocusSettings TrackingFocusSettings;
    uint8 bDrawDebugFocusPlane;
    FColor DebugFocusPlaneColor;
    uint8 bSmoothFocusChanges;
    float FocusSmoothingInterpSpeed;
    float FocusOffset;

};

struct FCameraLensSettings
{
    float MinFocalLength;
    float MaxFocalLength;
    float MinFStop;
    float MaxFStop;
    float MinimumFocusDistance;
    int32 DiaphragmBladeCount;

};

struct FCameraLookatTrackingSettings
{
    uint8 bEnableLookAtTracking;
    uint8 bDrawDebugLookAtTrackingPosition;
    float LookAtTrackingInterpSpeed;
    TSoftObjectPtr<AActor> ActorToTrack;
    FVector RelativeOffset;
    uint8 bAllowRoll;

};

struct FCameraTrackingFocusSettings
{
    TSoftObjectPtr<AActor> ActorToTrack;
    FVector RelativeOffset;
    uint8 bDrawDebugTrackingFocusPoint;

};

struct FNamedFilmbackPreset
{
    FString Name;
    FCameraFilmbackSettings FilmbackSettings;

};

struct FNamedLensPreset
{
    FString Name;
    FCameraLensSettings LensSettings;

};

class ACameraRig_Crane : public AActor
{
    float CranePitch;
    float CraneYaw;
    float CraneArmLength;
    bool bLockMountPitch;
    bool bLockMountYaw;
    class USceneComponent* TransformComponent;
    class USceneComponent* CraneYawControl;
    class USceneComponent* CranePitchControl;
    class USceneComponent* CraneCameraMount;

};

class ACameraRig_Rail : public AActor
{
    float CurrentPositionOnRail;
    bool bLockOrientationToRail;
    class USceneComponent* TransformComponent;
    class USplineComponent* RailSplineComponent;
    class USceneComponent* RailCameraMount;

    class USplineComponent* GetRailSplineComponent();
};

class ACineCameraActor : public ACameraActor
{
    FCameraLookatTrackingSettings LookatTrackingSettings;

    class UCineCameraComponent* GetCineCameraComponent();
};

class UCineCameraComponent : public UCameraComponent
{
    FCameraFilmbackSettings FilmbackSettings;
    FCameraFilmbackSettings Filmback;
    FCameraLensSettings LensSettings;
    FCameraFocusSettings FocusSettings;
    float CurrentFocalLength;
    float CurrentAperture;
    float CurrentFocusDistance;
    TArray<FNamedFilmbackPreset> FilmbackPresets;
    TArray<FNamedLensPreset> LensPresets;
    FString DefaultFilmbackPresetName;
    FString DefaultFilmbackPreset;
    FString DefaultLensPresetName;
    float DefaultLensFocalLength;
    float DefaultLensFStop;

    void SetLensPresetByName(FString InPresetName);
    void SetFilmbackPresetByName(FString InPresetName);
    void SetCurrentFocalLength(float InFocalLength);
    float GetVerticalFieldOfView();
    TArray<FNamedLensPreset> GetLensPresetsCopy();
    FString GetLensPresetName();
    float GetHorizontalFieldOfView();
    TArray<FNamedFilmbackPreset> GetFilmbackPresetsCopy();
    FString GetFilmbackPresetName();
    FString GetDefaultFilmbackPresetName();
};

#endif
