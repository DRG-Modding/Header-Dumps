#ifndef UE4SS_SDK_BP_Refinery_Lamp_HPP
#define UE4SS_SDK_BP_Refinery_Lamp_HPP

class ABP_Refinery_Lamp_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UPointLightComponent* PointLight;
    UBoxComponent* Box;
    UStaticMeshComponent* Lamp Mesh;
    USceneComponent* DefaultSceneRoot;

    void OnRefineryStateChanged(ERefineryState InRefineryState);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Refinery_Lamp(int32 EntryPoint, AActor* CallFunc_GetParentActor_ReturnValue, RefineryStateDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, UFSDRefinery* K2Node_DynamicCast_AsFSDRefinery, bool K2Node_DynamicCast_bSuccess, ERefineryState K2Node_CustomEvent_InRefineryState);
}

#endif
