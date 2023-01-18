#ifndef UE4SS_SDK_BP_FSDCameraManager_HPP
#define UE4SS_SDK_BP_FSDCameraManager_HPP

class ABP_FSDCameraManager_C : public AFSDPlayerCameraManager
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* PhysicalSphere;
    bool SessionStarted;
    float MaxDistance;
    FBP_FSDCameraManager_CHideHUDForPhotography HideHUDForPhotography;
    void HideHUDForPhotography();
    FBP_FSDCameraManager_CShowHUDForPhotography ShowHUDForPhotography;
    void ShowHUDForPhotography();
    bool UserVisibility;
    ECharacterCameraMode PreviousCameraMode;
    bool PauseGame;
    float SphereReturnVelocity;
    float MaxDistanceTolerance;
    bool KeyDebug;
    float MaxSpeed;

    void ChangeMaxDistance(float MaxDistance);
    void ChangeSpeed(float MaxSpeed);
    float SmoothReturnVelocity(FVector New Camera Location);
    void SphereDirectionToPlayer(FVector& Direction);
    void SetToThirdPersonCamera(FVector& New Camera Position);
    void ReturnCameraMode(class APlayerCharacter* Target, ECharacterCameraMode NewCameraMode);
    void PhotographyCameraModify(const FVector NewCameraLocation, const FVector PreviousCameraLocation, const FVector OriginalCameraLocation, FVector& ResultCameraLocation);
    void ReceiveDestroyed();
    void OnPhotographySessionEnd();
    void OnPhotographySessionStart();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void TogglePhotographyMode(bool Active);
    void Return Camera();
    void LoaderStart(class ULevelSequence* LoaderLevelSequence);
    void LoaderStop();
    void ExecuteUbergraph_BP_FSDCameraManager(int32 EntryPoint);
    void ShowHUDForPhotography__DelegateSignature();
    void HideHUDForPhotography__DelegateSignature();
};

#endif
