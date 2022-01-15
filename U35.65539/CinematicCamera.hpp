#ifndef UE4SS_SDK_CinematicCamera_HPP
#define UE4SS_SDK_CinematicCamera_HPP

#include "CinematicCamera_enums.hpp"

class ACameraRig_Crane : AActor
{
    float CranePitch;
    float CraneYaw;
    float CraneArmLength;
    bool bLockMountPitch;
    bool bLockMountYaw;
    USceneComponent* TransformComponent;
    USceneComponent* CraneYawControl;
    USceneComponent* CranePitchControl;
    USceneComponent* CraneCameraMount;
}

class ACameraRig_Rail : AActor
{
    float CurrentPositionOnRail;
    bool bLockOrientationToRail;
    USceneComponent* TransformComponent;
    USplineComponent* RailSplineComponent;
    USceneComponent* RailCameraMount;

    USplineComponent* GetRailSplineComponent();
}

class ACineCameraActor : ACameraActor
{
    FCameraLookatTrackingSettings LookatTrackingSettings;

    UCineCameraComponent* GetCineCameraComponent();
}

class UCineCameraComponent : UCameraComponent
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
    void SetCurrentFocalLength(const float& InFocalLength);
    float GetVerticalFieldOfView();
    TArray<FNamedLensPreset> GetLensPresetsCopy();
    FString GetLensPresetName();
    float GetHorizontalFieldOfView();
    FString GetFilmbackPresetName();
    FString GetDefaultFilmbackPresetName();
}

struct FCameraLookatTrackingSettings
{
    uint8 bEnableLookAtTracking;
    uint8 bDrawDebugLookAtTrackingPosition;
    float LookAtTrackingInterpSpeed;
    TSoftObjectPtr<AActor> ActorToTrack;
    FVector RelativeOffset;
    uint8 bAllowRoll;
}

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
}

struct FCameraTrackingFocusSettings
{
    TSoftObjectPtr<AActor> ActorToTrack;
    FVector RelativeOffset;
    uint8 bDrawDebugTrackingFocusPoint;
}

struct FNamedLensPreset
{
    FString Name;
    FCameraLensSettings LensSettings;
}

struct FCameraLensSettings
{
    float MinFocalLength;
    float MaxFocalLength;
    float MinFStop;
    float MaxFStop;
    float MinimumFocusDistance;
    int32 DiaphragmBladeCount;
}

struct FNamedFilmbackPreset
{
    FString Name;
    FCameraFilmbackSettings FilmbackSettings;
}

struct FCameraFilmbackSettings
{
    float SensorWidth;
    float SensorHeight;
    float SensorAspectRatio;
}

#endif
