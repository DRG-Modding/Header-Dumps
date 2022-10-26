#ifndef UE4SS_SDK_TOOLTIP_ServerEntry_Team_HPP
#define UE4SS_SDK_TOOLTIP_ServerEntry_Team_HPP

class UTOOLTIP_ServerEntry_Team_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Menu_MinimalWindow_C* Basic_Menu_MinimalWindow;
    class UVerticalBox* ContentBox;
    FSlateFontInfo ResourceFont;
    int32 MaxIcons;

    void SetData(class UITM_ServerList_Entry_PlayerIcons_C* TeamWidget, TArray<class UPlayerCharacterID*>& Players, bool IsClassLocked);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_TOOLTIP_ServerEntry_Team(int32 EntryPoint);
};

#endif
