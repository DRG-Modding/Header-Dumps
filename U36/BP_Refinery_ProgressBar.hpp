#ifndef UE4SS_SDK_BP_Refinery_ProgressBar_HPP
#define UE4SS_SDK_BP_Refinery_ProgressBar_HPP

class ABP_Refinery_ProgressBar_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCapsuleComponent* Capsule;
    class UStaticMeshComponent* StaticMesh;
    class USceneComponent* DefaultSceneRoot;
    class UMaterialInstanceDynamic* ProgressMaterial;
    float Progress;
    class AFSDRefinery* Refinery;
    ERefineryState State;

    void SetColors(FLinearColor InStartColor, FLinearColor InEndColor, FLinearColor InBackgroundColor);
    void SetProgress(float InProgress01);
    void UserConstructionScript();
    void OnTick_321D738B4128D90EE5392DBACA2273B4(float DeltaTime, float NormalizedTime);
    void Completed_321D738B4128D90EE5392DBACA2273B4(float DeltaTime, float NormalizedTime);
    void ReceiveBeginPlay();
    void OnRefineryStateChanged(ERefineryState InRefineryState);
    void ExecuteUbergraph_BP_Refinery_ProgressBar(int32 EntryPoint);
};

#endif
