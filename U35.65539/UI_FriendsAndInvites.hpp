#ifndef UE4SS_SDK_UI_FriendsAndInvites_HPP
#define UE4SS_SDK_UI_FriendsAndInvites_HPP

class UUI_FriendsAndInvites_C : UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_1;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_2;
    UBlurBackground_C* BlurBackground;
    UBorder* Border;
    UBasic_ButtonScalable2_C* CloseButton;
    UBasic_Label_C* Friends;
    UUI_FriendList_C* UI_FriendList;

    void BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void ExecuteUbergraph_UI_FriendsAndInvites(int32 EntryPoint);
}

#endif
