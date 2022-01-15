#ifndef UE4SS_SDK_BP_Invitation_HPP
#define UE4SS_SDK_BP_Invitation_HPP

class UBP_Invitation_C : UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* Hide;
    UWidgetAnimation* Show;
    UImage* AvatarImage;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    UBasic_Menu_MinimalWindow_C* BasicWindow_Minimal;
    UBasic_ButtonScalable2_C* BTN_Ignore;
    UBasic_ButtonScalable2_C* BTN_No;
    UBasic_ButtonScalable2_C* BTN_Yes;
    UHorizontalBox* buttons;
    UHorizontalBox* buttons2;
    UTextBlock* DATA_Content;
    UTextBlock* DATA_Header;
    UHorizontalBox* DataBox;
    FDiscordUserDataSDK UserData_New;
    bool Initialized;
    FDateTime TimeStarted;
    FBP_Invitation_CImageReady ImageReady;
    void ImageReady(FString URL);
    bool Initializing;
    float InviteTime;

    void ReplyInvite(int32 Reply, UDiscordSDKInterface* CallFunc_Get_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, UDiscordSDKInterface* CallFunc_Get_ReturnValue_1, bool CallFunc_IsValid_ReturnValue);
    void Initialize(FDiscordUserDataSDK User Data, float TimeElapsed, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, FString CallFunc_MakeLiteralString_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_1, FText CallFunc_Conv_StringToText_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_2, FDateTime CallFunc_Now_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_3, FString CallFunc_Concat_StrStr_ReturnValue_4);
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEventFName CallFunc_MakeLiteralName_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue_1, bool CallFunc_IsKeyEventAction_ReturnValue, bool CallFunc_IsKeyEventAction_ReturnValue_1, FName CallFunc_MakeLiteralName_ReturnValue_2, FEventReply CallFunc_Handled_ReturnValue, bool CallFunc_IsKeyEventAction_ReturnValue_2);
    void OnFail_1E7B4EA94EB1E25E604B80A4114A24A4(UTexture2DDynamic* Texture);
    void OnSuccess_1E7B4EA94EB1E25E604B80A4114A24A4(UTexture2DDynamic* Texture);
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnReadyImage(FString URL);
    void BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
    void BndEvt__BTN_No_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature();
    void BndEvt__Basic_ButtonScalable2_C_3_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature();
    void HideUIDelayed();
    void ExecuteUbergraph_BP_Invitation(int32 EntryPoint, UTexture2DDynamic* K2Node_CustomEvent_Texture_1, DownloadImageDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, UTexture2DDynamic* K2Node_CustomEvent_Texture, DownloadImageDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, UTexture2DDynamic* Temp_object_Variable, ImageReady__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, FDateTime CallFunc_Now_ReturnValue, FTimespan CallFunc_Subtract_DateTimeDateTime_ReturnValue, float CallFunc_GetTotalSeconds_ReturnValue, FString K2Node_CustomEvent_URL, UAsyncTaskDownloadImage* CallFunc_DownloadImage_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, FVector2D CallFunc_MakeVector2D_ReturnValue);
    void ImageReady__DelegateSignature(FString URL);
}

#endif
