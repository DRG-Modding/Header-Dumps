#ifndef UE4SS_SDK_BP_Extractor_Lamp_HPP
#define UE4SS_SDK_BP_Extractor_Lamp_HPP

class ABP_Extractor_Lamp_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPointLightComponent* PointLight;
    class UBoxComponent* Box;
    class UStaticMeshComponent* Lamp Mesh;
    class USceneComponent* DefaultSceneRoot;

    void OnRefineryStateChanged(ERefineryState InRefineryState);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Extractor_Lamp(int32 EntryPoint, class AActor* CallFunc_GetParentActor_ReturnValue, FExecuteUbergraph_BP_Extractor_LampK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class AFSDRefinery* K2Node_DynamicCast_AsFSDRefinery, bool K2Node_DynamicCast_bSuccess, ERefineryState K2Node_CustomEvent_InRefineryState);
};

#endif
