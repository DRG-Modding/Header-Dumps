#ifndef UE4SS_SDK_BP_Refinery_ProjectorLight_HPP
#define UE4SS_SDK_BP_Refinery_ProjectorLight_HPP

class ABP_Refinery_ProjectorLight_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBoxComponent* Box1;
    UBoxComponent* Box;
    UStaticMeshComponent* StaticMesh4;
    USpotLightComponent* SpotLight;
    UStaticMeshComponent* ST_Floodlight_Small;
    USceneComponent* DefaultSceneRoot;

    void ReceiveBeginPlay();
    void OnRefineryStateChanged(ERefineryState InRefineryState);
    void ExecuteUbergraph_BP_Refinery_ProjectorLight(int32 EntryPoint, ERefineryState Temp_byte_Variable, RefineryStateDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, bool Temp_bool_Variable_5, bool Temp_bool_Variable_6, AActor* CallFunc_GetParentActor_ReturnValue, ERefineryState K2Node_CustomEvent_InRefineryState, UFSDRefinery* K2Node_DynamicCast_AsFSDRefinery, bool K2Node_DynamicCast_bSuccess, bool K2Node_Select_Default);
}

#endif
