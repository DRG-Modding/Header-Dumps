#ifndef UE4SS_SDK_HUD_PlayerInfo_HPP
#define UE4SS_SDK_HUD_PlayerInfo_HPP

class UHUD_PlayerInfo_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UITM_SupplyBar_C* AmmoBar;
    UOverlay* ClassLine;
    UImage* GradientBGMiddle;
    UOverlay* HealthLine;
    UHUD_PlayerClass_Icon_C* HUD_PlayerClass_Icon_86;
    UHUD_PlayerPerks_C* HUD_PlayerPerks;
    UOverlay* NameLine;
    UUI_CallingMolly_C* UI_CallingMolly;
    bool PreviewShowName&Icon;
    bool PreviewShowHealth&Shield;
    APlayerCharacter* Character;
    UPlayerHealthComponent* HealthComponent;
    bool WasDead;
    bool UsingItem;
    bool UsingLaserpointer;
    UHUDVisibilityGroup* HG_ClassName;
    UHUDVisibilityGroup* HG_HealthShield;
    bool LookingAtSupplyPod;

    void SetElementVisibility(bool Name, Class & Icon, bool Health & Shield, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, ESlateVisibility K2Node_Select_Default, ESlateVisibility K2Node_Select_Default_1);
    void ShowDynamically();
    void OnCharacterStateChanged_Event(ECharacterState NewState);
    void OnHealthChanged_Event(float Health);
    void OnLaserPointerPressed_Event();
    void OnLaserPointerReleased_Event();
    void VisibilityModeChanged();
    void BndEvt__HG_ClassName_K2Node_ComponentBoundEvent_2_VisibilityDelegate__DelegateSignature(UHUDVisibilityGroup* Group, bool IsVisible);
    void BndEvt__HG_HealthShield_K2Node_ComponentBoundEvent_3_VisibilityDelegate__DelegateSignature(UHUDVisibilityGroup* Group, bool IsVisible);
    void OnFirePressed_Event();
    void OnFireReleased_Event();
    void OnSupplyStatusChangedEvent(float ammoStatus01, float healthStatus01);
    void ShowAmmoCounter();
    void OnBeginHoveringEvent(UUsableComponentBase* Component);
    void OnEndHoveringEvent_Event();
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_HUD_PlayerInfo(int32 EntryPoint, UFSDPlayerState* CallFunc_GetOwningFSDPlayerState_ReturnValue, OnCharacterStateChangedSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate, HealthChangedSig__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, OnLaserPointerPressedSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, OnLaserPointerPressedSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, FirePressedDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, FirePressedDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_5, SupplyStatusChangedDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_6, BeginUsingDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_7, EndUsingDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_8, APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, HealthChangedSig__DelegateSignature K2Node_CreateDelegate_OutputDelegate_9, float CallFunc_GetHealthRegeneratingTargetRatio_ReturnValue, float CallFunc_GetHealthPct_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_IsAlive_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, ECharacterState K2Node_CustomEvent_newState, bool CallFunc_EqualEqual_ByteByte_ReturnValue, float K2Node_CustomEvent_health, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_IsHudGroupVisible_ReturnValue, bool CallFunc_IsHudGroupVisible_ReturnValue_1, UHUDVisibilityGroup* K2Node_ComponentBoundEvent_Group_1, bool K2Node_ComponentBoundEvent_IsVisible_1, UHUDVisibilityGroup* K2Node_ComponentBoundEvent_Group, bool K2Node_ComponentBoundEvent_IsVisible, float K2Node_CustomEvent_ammoStatus01, float K2Node_CustomEvent_healthStatus01, UFSDPlayerState* CallFunc_GetPlayerState_ReturnValue, UFSDPlayerState* CallFunc_GetPlayerState_ReturnValue_1, float CallFunc_GetSupplyAmmoStatus_ReturnValue, UUsableComponentBase* K2Node_CustomEvent_component, AActor* CallFunc_GetOwner_ReturnValue, ARessuplyPod* K2Node_DynamicCast_AsRessuply_Pod, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, bool K2Node_Event_IsDesignTime);
}

#endif
