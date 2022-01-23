#ifndef UE4SS_SDK_BP_CraftingConsole_HPP
#define UE4SS_SDK_BP_CraftingConsole_HPP

class ABP_CraftingConsole_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USpotLightComponent* SpotLight2;
    class UPointLightComponent* PointLight4;
    class UPointLightComponent* PointLight3;
    class UPointLightComponent* PointLight2;
    class UPointLightComponent* PointLight1;
    class USpotLightComponent* SpotLight1;
    class UStaticMeshComponent* LightCone2;
    class USpotLightComponent* SpotLight;
    class UStaticMeshComponent* LightCone1;
    class UWidgetComponent* Widget;
    class UWidgetComponent* Widget2;
    class UWidgetComponent* Widget1;
    class UStaticMeshComponent* StaticMesh;
    class UTextRenderComponent* TextRender;
    class UBoxComponent* Box;
    class UInstantUsable* InstantUsable;
    class USceneComponent* DefaultSceneRoot;
    float Timeline_0_NewTrack_0_26FA2F8A445C2278C5D1B8901F1A6686;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_26FA2F8A445C2278C5D1B8901F1A6686;
    class UTimelineComponent* Timeline_0;
    TArray<class ABP_PlayerController_SpaceRig_C*> PlayersThatHaveUsed;

    void IsNewPlayer(class ABP_PlayerController_SpaceRig_C* PlayerController, bool& IsNewPlayer, bool FoundController, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, class ABP_PlayerController_SpaceRig_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void ReceiveBeginPlay();
    void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void ExecuteUbergraph_BP_CraftingConsole(int32 EntryPoint, class APlayerCharacter* K2Node_ComponentBoundEvent_user, EInputKeys K2Node_ComponentBoundEvent_key, bool CallFunc_IsLocallyControlled_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class ABP_PlayerController_SpaceRig_C* K2Node_DynamicCast_AsBP_Player_Controller_Space_Rig, bool K2Node_DynamicCast_bSuccess, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsNewPlayer_IsNewPlayer, float CallFunc_Multiply_FloatFloat_ReturnValue);
};

#endif
