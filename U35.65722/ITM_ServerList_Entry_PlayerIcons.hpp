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

    void Get Player Details(TArray<class UPlayerCharacterID*>& Players, int32 PlayerIndex, bool IsClassLocked, FLinearColor& OutColor, class UTexture2D*& OutIcon, class UPlayerCharacterID*& OutPlayer, class UPlayerCharacterID* Player, class UTexture2D* Icon, FLinearColor Color, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UPlayerCharacterID* CallFunc_Array_Get_Item, FLinearColor CallFunc_MenuColors_OutputColor, bool CallFunc_Less_IntInt_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor_1, FLinearColor CallFunc_GetColor_ReturnValue, class UTexture2D* CallFunc_GetSmallIcon_ReturnValue);
    class UTOOLTIP_ServerEntry_Team_C* GetToolTip(bool CallFunc_IsValid_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UTOOLTIP_ServerEntry_Team_C* CallFunc_Create_ReturnValue);
    void SetIndexBrush(int32 NumPlayers, int32 EntryNum, class UImage* Target, TArray<class UPlayerCharacterID*>& Players, bool IsClassLocked, class UTexture2D* Icon, FLinearColor Color, TSubclassOf<class APlayerCharacter> Player, FLinearColor CallFunc_Get_Player_Details_OutColor, class UTexture2D* CallFunc_Get_Player_Details_OutIcon, class UPlayerCharacterID* CallFunc_Get_Player_Details_OutPlayer);
    void SetNumPlayers(int32 NumPlayers, TArray<class UPlayerCharacterID*>& Players, bool IsClassLocked, TArray<class UImage*> PlayerArray, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UImage* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UTOOLTIP_ServerEntry_Team_C* CallFunc_GetToolTip_ReturnValue, TArray<class UImage*>& K2Node_MakeArray_Array);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_ServerList_Entry_PlayerIcons(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_Event_IsDesignTime, TArray<class UImage*>& K2Node_MakeArray_Array, FVector2D CallFunc_MakeVector2D_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor, class UImage* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, bool CallFunc_Less_IntInt_ReturnValue_1);
};

#endif
