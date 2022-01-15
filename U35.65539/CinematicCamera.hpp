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

struct UCameraLookatTrackingSettings
{
    uint8 bEnableLookAtTracking;
    uint8 bDrawDebugLookAtTrackingPosition;
    float LookAtTrackingInterpSpeed;
    TSoftObjectPtr<AActor> ActorToTrack;
    FVector RelativeOffset;
    uint8 bAllowRoll;
}

struct UCameraFocusSettings
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

struct UCameraTrackingFocusSettings
{
    TSoftObjectPtr<AActor> ActorToTrack;
    FVector RelativeOffset;
    uint8 bDrawDebugTrackingFocusPoint;
}

struct UNamedLensPreset
{
    FString Name;
    FCameraLensSettings LensSettings;
}

struct UCameraLensSettings
{
    float MinFocalLength;
    float MaxFocalLength;
    float MinFStop;
    float MaxFStop;
    float MinimumFocusDistance;
    int32 DiaphragmBladeCount;
}

struct UNamedFilmbackPreset
{
    FString Name;
    FCameraFilmbackSettings FilmbackSettings;
}

struct UCameraFilmbackSettings
{
    float SensorWidth;
    float SensorHeight;
    float SensorAspectRatio;
}

#endif
