#ifndef UE4SS_SDK_BP_Refinery_Rocketlamp_HPP
#define UE4SS_SDK_BP_Refinery_Rocketlamp_HPP

class ABP_Refinery_RocketLamp_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPointLightComponent* PointLight1;
    class UBoxComponent* Box;
    class UStaticMeshComponent* Lamp Mesh;
    class USceneComponent* DefaultSceneRoot;
    ERefineryState State;

    void ReceiveBeginPlay();
    void OnRefineryStateChanged(ERefineryState InRefineryState);
    void ExecuteUbergraph_BP_Refinery_RocketLamp(int32 EntryPoint, class UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, bool CallFunc_GetPhotosensitiveMode_ReturnValue, FExecuteUbergraph_BP_Refinery_RocketLampK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable, class UMaterialInterface* Temp_object_Variable, bool Temp_bool_Variable_1, class UMaterialInterface* Temp_object_Variable_1, class UMaterialInterface* Temp_object_Variable_2, class UMaterialInterface* K2Node_Select_Default, class AActor* CallFunc_GetParentActor_ReturnValue, ERefineryState K2Node_CustomEvent_InRefineryState, class AFSDRefinery* K2Node_DynamicCast_AsFSDRefinery, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UMaterialInterface* K2Node_Select_Default_1);
};

#endif
