#ifndef UE4SS_SDK_UI_CoreInfuser_Reward_Background_HPP
#define UE4SS_SDK_UI_CoreInfuser_Reward_Background_HPP

class UUI_CoreInfuser_Reward_Background_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimHover;
    class UImage* BG;
    class USizeBox* IconSizer;
    class UImage* Overlay;
    bool Angled;
    bool IsHovering;
    float Size;
    class USchematicCategory* Category;

    void SetCategory(class USchematicCategory* InSchematicCategory);
    void SetSize(float InSize);
    void SetHovered(bool InHovering);
    void SetAngled(bool Angled);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_CoreInfuser_Reward_Background(int32 EntryPoint);
};

#endif
