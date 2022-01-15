#ifndef UE4SS_SDK_ConsoleScreen_Crafting_HPP
#define UE4SS_SDK_ConsoleScreen_Crafting_HPP

class UConsoleScreen_Crafting_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* ShopRotate;
    UWidgetAnimation* Pan03;
    UWidgetAnimation* Pan02;
    UWidgetAnimation* Pan01;
    UWidgetAnimation* Blink;
    UConsoleScreen_Notification_C* ConsoleScreen_Notification;
    UImage* Image_Ad;
    UImage* Image_Blink;
    UOverlay* Overlay_0;
    UImage* Shadow;
    TArray<UTexture2D*> NewVar_0;
    UTexture2D* NewVar_1;
    bool Show Shop Sign;

    void SetShowShopSign(bool Show Shop Sign, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility K2Node_Select_Default);
    void Construct();
    void Notification Change();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ConsoleScreen_Crafting(int32 EntryPoint, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, int32 Temp_int_Variable, UTexture2D* Temp_object_Variable, UTexture2D* Temp_object_Variable_1, UTexture2D* Temp_object_Variable_2, UTexture2D* Temp_object_Variable_3, UTexture2D* Temp_object_Variable_4, UTexture2D* Temp_object_Variable_5, UTexture2D* Temp_object_Variable_6, UTexture2D* Temp_object_Variable_7, UTexture2D* Temp_object_Variable_8, UTexture2D* Temp_object_Variable_9, UTexture2D* Temp_object_Variable_10, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, uint8 Temp_byte_Variable_2, uint8 Temp_byte_Variable_3, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, UGameData* CallFunc_GetFSDGameData_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, bool CallFunc_IsInItemUINotificationSet_ReturnValue, UTexture2D* K2Node_Select_Default, ESlateVisibility K2Node_Select_Default_1, float CallFunc_RandomFloatInRange_ReturnValue, ItemUINotificationDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool K2Node_Event_IsDesignTime, int32 CallFunc_RandomIntegerInRange_ReturnValue_1, const TArray<UWidgetAnimation*>& K2Node_MakeArray_Array, int32 CallFunc_Array_LastIndex_ReturnValue, uint8 K2Node_Select_Default_2, int32 CallFunc_RandomIntegerInRange_ReturnValue_2, UWidgetAnimation* K2Node_Select_Default_3, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2);
}

#endif
