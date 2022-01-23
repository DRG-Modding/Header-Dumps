#ifndef UE4SS_SDK_UI_FriendListEntry_HPP
#define UE4SS_SDK_UI_FriendListEntry_HPP

class UUI_FriendListEntry_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Label_C* FriendNameLabel;
    class UButton* InviteButton;
    class UBasic_Label_C* StatusLabel;
    FBlueprintFriend Friend;

    void OnFailure_6DA1BB7A433826EE5FB6FCA321A4C89C();
    void OnSuccess_6DA1BB7A433826EE5FB6FCA321A4C89C();
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void BndEvt__Button_87_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_UI_FriendListEntry(int32 EntryPoint, EFriendOnlineStatusEnum Temp_byte_Variable, FText Temp_text_Variable, FText Temp_text_Variable_1, FText Temp_text_Variable_2, FExecuteUbergraph_UI_FriendListEntryK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FExecuteUbergraph_UI_FriendListEntryK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, bool K2Node_Event_IsDesignTime, FText K2Node_Select_Default, FText CallFunc_Conv_StringToText_ReturnValue, class USendSessionInviteToFriendBlueprintCallProxy* CallFunc_SendSessionInviteToFriend_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

#endif
