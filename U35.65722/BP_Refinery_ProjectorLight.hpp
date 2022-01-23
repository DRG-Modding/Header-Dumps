#ifndef UE4SS_SDK_BP_Refinery_ProjectorLight_HPP
#define UE4SS_SDK_BP_Refinery_ProjectorLight_HPP

class ABP_Refinery_ProjectorLight_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBoxComponent* Box1;
    class UBoxComponent* Box;
    class UStaticMeshComponent* StaticMesh4;
    class USpotLightComponent* SpotLight;
    class UStaticMeshComponent* ST_Floodlight_Small;
    class USceneComponent* DefaultSceneRoot;

    void ReceiveBeginPlay();
    void OnRefineryStateChanged(ERefineryState InRefineryState);
    void ExecuteUbergraph_BP_Refinery_ProjectorLight(int32 EntryPoint, ERefineryState Temp_byte_Variable, FExecuteUbergraph_BP_Refinery_ProjectorLightK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, bool Temp_bool_Variable_5, bool Temp_bool_Variable_6, class AActor* CallFunc_GetParentActor_ReturnValue, ERefineryState K2Node_CustomEvent_InRefineryState, class AFSDRefinery* K2Node_DynamicCast_AsFSDRefinery, bool K2Node_DynamicCast_bSuccess, bool K2Node_Select_Default);
};

#endif
