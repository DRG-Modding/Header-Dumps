#ifndef UE4SS_SDK_BP_EscortGarage_Beacon_HPP
#define UE4SS_SDK_BP_EscortGarage_Beacon_HPP

class ABP_EscortGarage_Beacon_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    USkeletalMeshComponent* SkeletalMesh;
    USceneComponent* Scene;
    float FadeIn_Opacity_8E81A0E64677DBDCECDF68BB3B6D6B18;
    TEnumAsByte<ETimelineDirection::Type> FadeIn__Direction_8E81A0E64677DBDCECDF68BB3B6D6B18;
    UTimelineComponent* FadeIn;
    float Fade_Opacity_F448C4A14DA9AD497475EFA962EB36DF;
    TEnumAsByte<ETimelineDirection::Type> Fade__Direction_F448C4A14DA9AD497475EFA962EB36DF;
    UTimelineComponent* Fade;
    TArray<UMaterialInstanceDynamic*> Materials;
    bool FadingOut;

    void OnRep_FadingOut();
    void Fade__FinishedFunc();
    void Fade__UpdateFunc();
    void FadeIn__FinishedFunc();
    void FadeIn__UpdateFunc();
    void ReceiveBeginPlay();
    void FadeOut();
    void ExecuteUbergraph_BP_EscortGarage_Beacon(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, TArray<UMaterialInstanceDynamic*>& CallFunc_CreateDynamicMaterialInstances_ReturnValue);
}

#endif
