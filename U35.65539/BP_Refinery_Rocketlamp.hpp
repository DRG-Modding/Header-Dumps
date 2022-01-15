#ifndef UE4SS_SDK_BP_Refinery_Rocketlamp_HPP
#define UE4SS_SDK_BP_Refinery_Rocketlamp_HPP

class ABP_Refinery_RocketLamp_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UPointLightComponent* PointLight1;
    UBoxComponent* Box;
    UStaticMeshComponent* Lamp Mesh;
    USceneComponent* DefaultSceneRoot;
    ERefineryState State;

    void ReceiveBeginPlay();
    void OnRefineryStateChanged(ERefineryState InRefineryState);
    void ExecuteUbergraph_BP_Refinery_RocketLamp(int32 EntryPoint, UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, bool CallFunc_GetPhotosensitiveMode_ReturnValue, RefineryStateDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable, UMaterialInterface* Temp_object_Variable, bool Temp_bool_Variable_1, UMaterialInterface* Temp_object_Variable_1, UMaterialInterface* Temp_object_Variable_2, UMaterialInterface* K2Node_Select_Default, AActor* CallFunc_GetParentActor_ReturnValue, ERefineryState K2Node_CustomEvent_InRefineryState, UFSDRefinery* K2Node_DynamicCast_AsFSDRefinery, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue, UMaterialInterface* K2Node_Select_Default_1);
}

#endif
