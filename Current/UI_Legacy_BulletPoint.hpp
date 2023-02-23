#ifndef UE4SS_SDK_UI_Legacy_BulletPoint_HPP
#define UE4SS_SDK_UI_Legacy_BulletPoint_HPP

class UUI_Legacy_BulletPoint_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* BulletPoint;
    class URichTextSizable* RichText_Label;
    FText Text;

    void SetText(FText InText);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_Legacy_BulletPoint(int32 EntryPoint);
};

#endif
