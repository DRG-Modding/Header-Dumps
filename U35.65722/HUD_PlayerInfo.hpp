#ifndef UE4SS_SDK_HUD_PlayerInfo_HPP
#define UE4SS_SDK_HUD_PlayerInfo_HPP

class UHUD_PlayerInfo_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UITM_SupplyBar_C* AmmoBar;
    class UOverlay* ClassLine;
    class UImage* GradientBGMiddle;
    class UOverlay* HealthLine;
    class UHUD_PlayerClass_Icon_C* HUD_PlayerClass_Icon_86;
    class UHUD_PlayerPerks_C* HUD_PlayerPerks;
    class UOverlay* NameLine;
    class UUI_CallingMolly_C* UI_CallingMolly;
    bool PreviewShowName&Icon;
    bool PreviewShowHealth&Shield;
    class APlayerCharacter* Character;
    class UPlayerHealthComponent* HealthComponent;
    bool WasDead;
    bool UsingItem;
    bool UsingLaserpointer;
    class UHUDVisibilityGroup* HG_ClassName;
    class UHUDVisibilityGroup* HG_HealthShield;
    bool LookingAtSupplyPod;

    void SetElementVisibility(bool Name, Class & Icon, bool Health & Shield, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, ESlateVisibility K2Node_Select_Default, ESlateVisibility K2Node_Select_Default_1);
    void ShowDynamically();
    void OnCharacterStateChanged_Event(ECharacterState NewState);
    void OnHealthChanged_Event(float Health);
    void OnLaserPointerPressed_Event();
    void OnLaserPointerReleased_Event();
    void VisibilityModeChanged();
    void BndEvt__HG_ClassName_K2Node_ComponentBoundEvent_2_VisibilityDelegate__DelegateSignature(class UHUDVisibilityGroup* Group, bool IsVisible);
    void BndEvt__HG_HealthShield_K2Node_ComponentBoundEvent_3_VisibilityDelegate__DelegateSignature(class UHUDVisibilityGroup* Group, bool IsVisible);
    void OnFirePressed_Event();
    void OnFireReleased_Event();
    void OnSupplyStatusChangedEvent(float ammoStatus01, float healthStatus01);
    void ShowAmmoCounter();
    void OnBeginHoveringEvent(class UUsableComponentBase* Component);
    void OnEndHoveringEvent_Event();
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_HUD_PlayerInfo(int32 EntryPoint, class AFSDPlayerState* CallFunc_GetOwningFSDPlayerState_ReturnValue, FExecuteUbergraph_HUD_PlayerInfoK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FExecuteUbergraph_HUD_PlayerInfoK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, FExecuteUbergraph_HUD_PlayerInfoK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, FExecuteUbergraph_HUD_PlayerInfoK2Node_CreateDelegate_OutputDelegate_3 K2Node_CreateDelegate_OutputDelegate_3, FExecuteUbergraph_HUD_PlayerInfoK2Node_CreateDelegate_OutputDelegate_4 K2Node_CreateDelegate_OutputDelegate_4, FExecuteUbergraph_HUD_PlayerInfoK2Node_CreateDelegate_OutputDelegate_5 K2Node_CreateDelegate_OutputDelegate_5, FExecuteUbergraph_HUD_PlayerInfoK2Node_CreateDelegate_OutputDelegate_6 K2Node_CreateDelegate_OutputDelegate_6, FExecuteUbergraph_HUD_PlayerInfoK2Node_CreateDelegate_OutputDelegate_7 K2Node_CreateDelegate_OutputDelegate_7, FExecuteUbergraph_HUD_PlayerInfoK2Node_CreateDelegate_OutputDelegate_8 K2Node_CreateDelegate_OutputDelegate_8, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, FExecuteUbergraph_HUD_PlayerInfoK2Node_CreateDelegate_OutputDelegate_9 K2Node_CreateDelegate_OutputDelegate_9, float CallFunc_GetHealthRegeneratingTargetRatio_ReturnValue, float CallFunc_GetHealthPct_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_IsAlive_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, ECharacterState K2Node_CustomEvent_newState, bool CallFunc_EqualEqual_ByteByte_ReturnValue, float K2Node_CustomEvent_health, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_IsHudGroupVisible_ReturnValue, bool CallFunc_IsHudGroupVisible_ReturnValue_1, class UHUDVisibilityGroup* K2Node_ComponentBoundEvent_Group_1, bool K2Node_ComponentBoundEvent_IsVisible_1, class UHUDVisibilityGroup* K2Node_ComponentBoundEvent_Group, bool K2Node_ComponentBoundEvent_IsVisible, float K2Node_CustomEvent_ammoStatus01, float K2Node_CustomEvent_healthStatus01, class AFSDPlayerState* CallFunc_GetPlayerState_ReturnValue, class AFSDPlayerState* CallFunc_GetPlayerState_ReturnValue_1, float CallFunc_GetSupplyAmmoStatus_ReturnValue, class UUsableComponentBase* K2Node_CustomEvent_component, class AActor* CallFunc_GetOwner_ReturnValue, class ARessuplyPod* K2Node_DynamicCast_AsRessuply_Pod, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, bool K2Node_Event_IsDesignTime);
};

#endif
