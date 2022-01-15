#ifndef UE4SS_SDK_FSDAnsel_HPP
#define UE4SS_SDK_FSDAnsel_HPP

#include "FSDAnsel_enums.hpp"

class UFSDAnselFunctionLibrary : UBlueprintFunctionLibrary
{

    void StopPhotographySession(UObject* WorldContextObject);
    void StartPhotographySession(UObject* WorldContextObject);
    void SetUIControlVisibility(UObject* WorldContextObject, const uint8 UIControlTarget, const bool bIsVisible);
    void SetSettleFrames(const int32 NumSettleFrames);
    void SetIsPhotographyAllowed(const bool bIsPhotographyAllowed);
    void SetCameraMovementSpeed(const float TranslationSpeed);
    void SetCameraConstraintDistance(const float MaxCameraDistance);
    void SetCameraConstraintCameraSize(const float CameraSize);
    void SetAutoPostprocess(const bool bShouldAutoPostprocess);
    void SetAutoPause(const bool bShouldAutoPause);
    bool IsPhotographyAvailable();
    bool IsPhotographyAllowed();
    void ConstrainCameraByGeometry(UObject* WorldContextObject, const FVector NewCameraLocation, const FVector PreviousCameraLocation, const FVector OriginalCameraLocation, FVector& OutCameraLocation);
    void ConstrainCameraByDistance(UObject* WorldContextObject, const FVector NewCameraLocation, const FVector PreviousCameraLocation, const FVector OriginalCameraLocation, FVector& OutCameraLocation, float MaxDistance);
}

#endif
