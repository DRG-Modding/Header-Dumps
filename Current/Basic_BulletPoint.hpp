#ifndef UE4SS_SDK_Basic_BulletPoint_HPP
#define UE4SS_SDK_Basic_BulletPoint_HPP

class UBasic_BulletPoint_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Image_C* Bullet_Image;
    class USizeBox* Bullet_SizeBox;
    class URichTextBlock* Bullet_Text;
    FText Text;
    bool Text To Upper;
    int32 TextMinWidth;
    FTextBlockStyle Text Default Style;
    class UDataTable* Text Style Set;
    class UTexture2D* BulletTexture;
    FMenuColorAndTint BulletColor;
    FVector2D BulletSize;
    int32 BulletSpacing;
    FMargin Bullet Padding;
    TEnumAsByte<EHorizontalAlignment> Bullet Horizontal Alignment;
    TEnumAsByte<EVerticalAlignment> Bullet Vertical Alignment;

    void SetBulletLayout(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment, TEnumAsByte<EVerticalAlignment> InVerticalAlignment, FMargin InPadding);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_Basic_BulletPoint(int32 EntryPoint);
};

#endif
