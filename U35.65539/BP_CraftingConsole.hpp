#ifndef UE4SS_SDK_BP_CraftingConsole_HPP
#define UE4SS_SDK_BP_CraftingConsole_HPP

class ABP_CraftingConsole_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    USpotLightComponent* SpotLight2;
    UPointLightComponent* PointLight4;
    UPointLightComponent* PointLight3;
    UPointLightComponent* PointLight2;
    UPointLightComponent* PointLight1;
    USpotLightComponent* SpotLight1;
    UStaticMeshComponent* LightCone2;
    USpotLightComponent* SpotLight;
    UStaticMeshComponent* LightCone1;
    UWidgetComponent* Widget;
    UWidgetComponent* Widget2;
    UWidgetComponent* Widget1;
    UStaticMeshComponent* StaticMesh;
    UTextRenderComponent* TextRender;
    UBoxComponent* Box;
    UInstantUsable* InstantUsable;
    USceneComponent* DefaultSceneRoot;
    float Timeline_0_NewTrack_0_26FA2F8A445C2278C5D1B8901F1A6686;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_26FA2F8A445C2278C5D1B8901F1A6686;
    UTimelineComponent* Timeline_0;
    TArray<ABP_PlayerController_SpaceRig_C*> PlayersThatHaveUsed;

    void IsNewPlayer(UBP_PlayerController_SpaceRig_C* PlayerController, bool& IsNewPlayer, bool FoundController, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, UBP_PlayerController_SpaceRig_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void ReceiveBeginPlay();
    void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(UPlayerCharacter* User, EInputKeys Key);
    void ExecuteUbergraph_BP_CraftingConsole(int32 EntryPoint, UPlayerCharacter* K2Node_ComponentBoundEvent_user, EInputKeys K2Node_ComponentBoundEvent_key, bool CallFunc_IsLocallyControlled_ReturnValue, AController* CallFunc_GetController_ReturnValue, UBP_PlayerController_SpaceRig_C* K2Node_DynamicCast_AsBP_Player_Controller_Space_Rig, bool K2Node_DynamicCast_bSuccess, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsNewPlayer_IsNewPlayer, float CallFunc_Multiply_FloatFloat_ReturnValue);
}

#endif
