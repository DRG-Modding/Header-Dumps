#ifndef UE4SS_SDK_ITEM_SpaceRig_PlayerRank_HPP
#define UE4SS_SDK_ITEM_SpaceRig_PlayerRank_HPP

class UITEM_SpaceRig_PlayerRank_C : public UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBorder* Border_NameDivider2;
    class UBorder* Border_PlayerName;
    class UBorder* Border_PlayerRank;
    class UTextBlock* DataCredits;
    class UICON_Rank_C* ICON_Rank;
    class UImage* Image_139;
    class UITM_TopBar_ResourceCounter_C* ITM_TopBar_ResourceCounter;
    class UTextBlock* PlayerRank;
    class UTextBlock* TXT_PlayerName;
    class UUI_NameTags_C* UI_NameTags;

    void SetPlayerName();
    void Construct();
    void Update();
    void OnCreditsChanged_Event();
    void OnPlayerProgressChanged(class AFSDPlayerState* PlayerState, FPlayerProgress Progress);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITEM_SpaceRig_PlayerRank(int32 EntryPoint);
};

#endif
