#ifndef UE4SS_SDK_HUD_TeamDisplay_SmallItem_HPP
#define UE4SS_SDK_HUD_TeamDisplay_SmallItem_HPP

class UHUD_TeamDisplay_SmallItem_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* RevivedAnimation;
    class UWidgetAnimation* DamageAnimation;
    class UWidgetAnimation* IntroAnimation;
    class UWidgetAnimation* ParalyzedAnimation;
    class UWidgetAnimation* DownAnimation;
    class UITM_SupplyBar_C* AmmoBar;
    class USizeBox* AmmoSizeBox;
    class UImage* DownIcon;
    class UImage* DownTarget;
    class UProgressBar* HealthBar;
    class USizeBox* HealthBarHolder;
    class UBorder* HealthBorder;
    class UWidgetSwitcher* IconSwitcher;
    class UITM_CharacterIcon_C* ITM_CharacterIcon;
    class UTextBlock* PlayerName;
    class UCircularThrobber* PlayerOnHisWayIndicator;
    class UUI_PlayerSpeaking_C* PlayerSpeaking;
    class UUI_CallingMolly_C* UI_CallingMolly;
    class AFSDPlayerState* PlayerState;
    class UPlayerHealthComponent* HealthComponent;
    class APlayerCharacter* PlayerCharacter;
    bool IsDown;
    bool IsParalyzed;
    bool AnimateIntro;
    bool LaserpointerEquipped;
    class APlayerCharacter* LocalCharacter;
    class AFSDPlayerState* LocalPlayerState;
    bool LookingAtSupplyPod;
    class UHUDVisibilityGroup* VisibilityGroup;
    bool DownFollowingPlayer;
    FString PreviewName;

    void ShowDynamicHUD();
    void OnVisibilityModeChanged(class UHUDVisibilityGroup* Group, EHUDVisibilityMode Mode);
    void BndEvt__PlayerSpeaking_K2Node_ComponentBoundEvent_0_OnChanged__DelegateSignature(bool InTalking);
    void OnPlayerNameChanged(FString NewName);
    void OnPlayerLeave_Event(class AFSDPlayerState* PlayerState);
    void StopAnim(class UWidgetAnimation* Anim);
    void OnPlayerCharacterSpawned(class APlayerCharacter* PlayerCharacter);
    void OnDeath(class UHealthComponentBase* HealthComponent);
    void OnDamageTaken_Event(float Amount);
    void OnHealthChanged(float Health);
    void PlayAnim(class UWidgetAnimation* Anim);
    void OnCharacterStateChanged(ECharacterState NewState);
    void OnOwningCharacterSpawned(class APlayerCharacter* PlayerCharacter);
    void Construct();
    void OnCharacterStateChanged_Event(ECharacterState NewState);
    void OnDownCameraTargetChanged(class APlayerCharacter* Target);
    void OnLaserPointerReleased_Event();
    void OnLaserPointerPressed_Event();
    void Show Ammo Bar();
    void OnEndHoveringEvent_Event();
    void OnBeginHoveringEvent(class UUsableComponentBase* Component);
    void PreConstruct(bool IsDesignTime);
    void OnSupplyStatusChangedEvent(float ammoStatus01, float healthStatus01);
    void ExecuteUbergraph_HUD_TeamDisplay_SmallItem(int32 EntryPoint);
};

#endif
