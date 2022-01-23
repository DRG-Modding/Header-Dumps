#ifndef UE4SS_SDK_ConsoleScreen_Crafting_HPP
#define UE4SS_SDK_ConsoleScreen_Crafting_HPP

class UConsoleScreen_Crafting_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* ShopRotate;
    class UWidgetAnimation* Pan03;
    class UWidgetAnimation* Pan02;
    class UWidgetAnimation* Pan01;
    class UWidgetAnimation* Blink;
    class UConsoleScreen_Notification_C* ConsoleScreen_Notification;
    class UImage* Image_Ad;
    class UImage* Image_Blink;
    class UOverlay* Overlay_0;
    class UImage* Shadow;
    TArray<class UTexture2D*> NewVar_0;
    class UTexture2D* NewVar_1;
    bool Show Shop Sign;

    void SetShowShopSign(bool Show Shop Sign, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility K2Node_Select_Default);
    void Construct();
    void Notification Change();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ConsoleScreen_Crafting(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, int32 Temp_int_Variable, class UTexture2D* Temp_object_Variable, class UTexture2D* Temp_object_Variable_1, class UTexture2D* Temp_object_Variable_2, class UTexture2D* Temp_object_Variable_3, class UTexture2D* Temp_object_Variable_4, class UTexture2D* Temp_object_Variable_5, class UTexture2D* Temp_object_Variable_6, class UTexture2D* Temp_object_Variable_7, class UTexture2D* Temp_object_Variable_8, class UTexture2D* Temp_object_Variable_9, class UTexture2D* Temp_object_Variable_10, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, TEnumAsByte<EUMGSequencePlayMode::Type> Temp_byte_Variable_2, TEnumAsByte<EUMGSequencePlayMode::Type> Temp_byte_Variable_3, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, class UGameData* CallFunc_GetFSDGameData_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, bool CallFunc_IsInItemUINotificationSet_ReturnValue, class UTexture2D* K2Node_Select_Default, ESlateVisibility K2Node_Select_Default_1, float CallFunc_RandomFloatInRange_ReturnValue, FExecuteUbergraph_ConsoleScreen_CraftingK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool K2Node_Event_IsDesignTime, int32 CallFunc_RandomIntegerInRange_ReturnValue_1, const TArray<class UWidgetAnimation*>& K2Node_MakeArray_Array, int32 CallFunc_Array_LastIndex_ReturnValue, TEnumAsByte<EUMGSequencePlayMode::Type> K2Node_Select_Default_2, int32 CallFunc_RandomIntegerInRange_ReturnValue_2, class UWidgetAnimation* K2Node_Select_Default_3, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2);
};

#endif
