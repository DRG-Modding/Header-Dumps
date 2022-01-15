#ifndef UE4SS_SDK_BP_SpecialTutorialCrystal_HPP
#define UE4SS_SDK_BP_SpecialTutorialCrystal_HPP

class ABP_SpecialTutorialCrystal_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UTerrainDetectComponent* TerrainDetect;
    UMeshCarverComponent* MeshCarver;
    UPointLightComponent* PointLight;
    USceneComponent* DefaultSceneRoot;
    float Timeline_0_LightIntensity_CD888BD245F644A958710A8BA8A62D72;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_CD888BD245F644A958710A8BA8A62D72;
    UTimelineComponent* Timeline_0;
    float InitialIntensity;

    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void ReceiveBeginPlay();
    void OnMatchStarted_Event_0();
    void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature();
    void ExecuteUbergraph_BP_SpecialTutorialCrystal(int32 EntryPoint, DelegateEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue);
}

#endif
