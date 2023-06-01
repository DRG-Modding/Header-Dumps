#ifndef UE4SS_SDK_UI_JettyBoots_Column_HPP
#define UE4SS_SDK_UI_JettyBoots_Column_HPP

class UUI_JettyBoots_Column_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Image_C* Bottom_Image;
    class UBasic_Image_C* Column_Image;
    class USizeBox* Column_SizeBox;
    class UVerticalBox* Column_VerticalBox;
    class UBasic_Image_C* Top_Image;
    bool Top;
    bool Bottom;
    int32 Height;

    void SetHeight(int32 InHeight);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_JettyBoots_Column(int32 EntryPoint);
};

#endif
