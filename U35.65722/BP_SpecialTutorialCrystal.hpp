#ifndef UE4SS_SDK_BP_SpecialTutorialCrystal_HPP
#define UE4SS_SDK_BP_SpecialTutorialCrystal_HPP

class ABP_SpecialTutorialCrystal_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTerrainDetectComponent* TerrainDetect;
    class UMeshCarverComponent* MeshCarver;
    class UPointLightComponent* PointLight;
    class USceneComponent* DefaultSceneRoot;
    float Timeline_0_LightIntensity_CD888BD245F644A958710A8BA8A62D72;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_CD888BD245F644A958710A8BA8A62D72;
    class UTimelineComponent* Timeline_0;
    float InitialIntensity;

    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void ReceiveBeginPlay();
    void OnMatchStarted_Event_0();
    void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature();
    void ExecuteUbergraph_BP_SpecialTutorialCrystal(int32 EntryPoint, FExecuteUbergraph_BP_SpecialTutorialCrystalK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue);
};

#endif
