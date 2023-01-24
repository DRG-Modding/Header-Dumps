#ifndef UE4SS_SDK_ITEM_SpaceRig_TeamMember_HPP
#define UE4SS_SDK_ITEM_SpaceRig_TeamMember_HPP

class UITEM_SpaceRig_TeamMember_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBorder* Border_CharacterLevel;
    class UBorder* Border_CharacterName;
    class UBorder* Border_PlayerName;
    class UBorder* Border_PlayerRank;
    class UUI_MaskedImage_C* CharIcon;
    class UTextBlock* ClassLevel;
    class UImage* Icon_CharacterLevel;
    class UImage* Icon_Host;
    class UImage* Icon_PlayerRank;
    class UImage* Icon_SonyTeamLeader;
    class UImage* Image_0;
    class UTextBlock* IncomingPlayerNameTxt;
    class UITM_RetirementBadge_C* ITM_RetirementBadge;
    class UOverlay* Overlay_0;
    class UImage* PlayerIconBG;
    class UImage* PlayerIconBorder;
    class UCircularThrobber* PlayerOnHisWayIndicator;
    class UTextBlock* PlayerRank;
    class UUI_PlayerSpeaking_C* PlayerSpeaking_Incoming;
    class UUI_PlayerSpeaking_C* PlayerSpeaking_Normal;
    class UWidgetSwitcher* StateSwitcher;
    class UTextBlock* TXT_CharacterName;
    class UTextBlock* TXT_PlayerName;
    class UUI_NameTags_C* UI_NameTags;
    class UUI_NameTags_C* UI_NameTags_C_0;
    class APlayerCharacter* PlayerCharacter;
    class AFSDPlayerState* PlayerState;

    void SetPlayerName();
    void Update(class APlayerCharacter* Character, class AFSDPlayerState* Player);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_ITEM_SpaceRig_TeamMember(int32 EntryPoint);
};

#endif
