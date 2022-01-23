#ifndef UE4SS_SDK_BP_Invitation_HPP
#define UE4SS_SDK_BP_Invitation_HPP

class UBP_Invitation_C : public UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Hide;
    class UWidgetAnimation* Show;
    class UImage* AvatarImage;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    class UBasic_Menu_MinimalWindow_C* BasicWindow_Minimal;
    class UBasic_ButtonScalable2_C* BTN_Ignore;
    class UBasic_ButtonScalable2_C* BTN_No;
    class UBasic_ButtonScalable2_C* BTN_Yes;
    class UHorizontalBox* buttons;
    class UHorizontalBox* buttons2;
    class UTextBlock* DATA_Content;
    class UTextBlock* DATA_Header;
    class UHorizontalBox* DataBox;
    FDiscordUserDataSDK UserData_New;
    bool Initialized;
    FDateTime TimeStarted;
    FBP_Invitation_CImageReady ImageReady;
    void ImageReady(FString URL);
    bool Initializing;
    float InviteTime;

    void ReplyInvite(int32 Reply, class UDiscordSDKInterface* CallFunc_Get_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, class UDiscordSDKInterface* CallFunc_Get_ReturnValue_1, bool CallFunc_IsValid_ReturnValue);
    void Initialize(FDiscordUserDataSDK User Data, float TimeElapsed, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, FString CallFunc_MakeLiteralString_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_1, FText CallFunc_Conv_StringToText_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_2, FDateTime CallFunc_Now_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_3, FString CallFunc_Concat_StrStr_ReturnValue_4);
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEventFName CallFunc_MakeLiteralName_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue_1, bool CallFunc_IsKeyEventAction_ReturnValue, bool CallFunc_IsKeyEventAction_ReturnValue_1, FName CallFunc_MakeLiteralName_ReturnValue_2, FEventReply CallFunc_Handled_ReturnValue, bool CallFunc_IsKeyEventAction_ReturnValue_2);
    void OnFail_1E7B4EA94EB1E25E604B80A4114A24A4(class UTexture2DDynamic* Texture);
    void OnSuccess_1E7B4EA94EB1E25E604B80A4114A24A4(class UTexture2DDynamic* Texture);
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnReadyImage(FString URL);
    void BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
    void BndEvt__BTN_No_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature();
    void BndEvt__Basic_ButtonScalable2_C_3_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature();
    void HideUIDelayed();
    void ExecuteUbergraph_BP_Invitation(int32 EntryPoint, class UTexture2DDynamic* K2Node_CustomEvent_Texture_1, FExecuteUbergraph_BP_InvitationK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class UTexture2DDynamic* K2Node_CustomEvent_Texture, FExecuteUbergraph_BP_InvitationK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, class UTexture2DDynamic* Temp_object_Variable, FExecuteUbergraph_BP_InvitationK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, FDateTime CallFunc_Now_ReturnValue, FTimespan CallFunc_Subtract_DateTimeDateTime_ReturnValue, float CallFunc_GetTotalSeconds_ReturnValue, FString K2Node_CustomEvent_URL, class UAsyncTaskDownloadImage* CallFunc_DownloadImage_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, FVector2D CallFunc_MakeVector2D_ReturnValue);
    void ImageReady__DelegateSignature(FString URL);
};

#endif
