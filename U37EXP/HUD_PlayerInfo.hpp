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

    void SetElementVisibility(bool Name, Class & Icon, bool Health & Shield);
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
    void ExecuteUbergraph_HUD_PlayerInfo(int32 EntryPoint);
};

#endif
