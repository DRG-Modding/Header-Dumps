#ifndef UE4SS_SDK_BG_Window_Outline_6px_HPP
#define UE4SS_SDK_BG_Window_Outline_6px_HPP

class UBG_Window_Outline_6px_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Corner;
    class UImage* Image_46;
    class UImage* Image_62;
    class UImage* Image_85;
    class UImage* Image_113;
    class UImage* Image_131;
    class UImage* Image_162;
    class UImage* Image_198;
    class UImage* Image_320;
    float CornerSize;

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_BG_Window_Outline_6px(int32 EntryPoint, FVector2D CallFunc_MakeVector2D_ReturnValue, bool K2Node_Event_IsDesignTime);
};

#endif
