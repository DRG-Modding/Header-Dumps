#ifndef UE4SS_SDK_BG_Window_Outline_6px_HPP
#define UE4SS_SDK_BG_Window_Outline_6px_HPP

class UBG_Window_Outline_6px_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UImage* Corner;
    UImage* Image_46;
    UImage* Image_62;
    UImage* Image_85;
    UImage* Image_113;
    UImage* Image_131;
    UImage* Image_162;
    UImage* Image_198;
    UImage* Image_320;
    float CornerSize;

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_BG_Window_Outline_6px(int32 EntryPoint, FVector2D CallFunc_MakeVector2D_ReturnValue, bool K2Node_Event_IsDesignTime);
}

#endif
