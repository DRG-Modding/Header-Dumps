#ifndef UE4SS_SDK_ITM_ServerList_Entry_PlayerIcons_HPP
#define UE4SS_SDK_ITM_ServerList_Entry_PlayerIcons_HPP

class UITM_ServerList_Entry_PlayerIcons_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Player1;
    class UImage* Player2;
    class UImage* Player3;
    class UImage* Player4;
    class UTextBlock* ToolTipBox;
    class UTexture2D* TextureEmpty;
    float Icon Size;
    class UTOOLTIP_ServerEntry_Team_C* ToolTip;
    int32 NumPlayers;
    TArray<class UPlayerCharacterID*> Players;
    bool ClassLocked;
    TArray<class UImage*> PlayerIcons;
    int32 MaxIcons;

    void Get Player Details(TArray<class UPlayerCharacterID*>& Players, int32 PlayerIndex, bool IsClassLocked, FLinearColor& OutColor, class UTexture2D*& OutIcon, class UPlayerCharacterID*& OutPlayer);
    class UTOOLTIP_ServerEntry_Team_C* GetToolTip();
    void SetIndexBrush(int32 NumPlayers, int32 EntryNum, class UImage* Target, TArray<class UPlayerCharacterID*>& Players, bool IsClassLocked);
    void SetNumPlayers(int32 NumPlayers, TArray<class UPlayerCharacterID*>& Players, bool IsClassLocked);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_ServerList_Entry_PlayerIcons(int32 EntryPoint);
};

#endif
