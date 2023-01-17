#ifndef UE4SS_SDK_UI_MissionStats_Categories_HPP
#define UE4SS_SDK_UI_MissionStats_Categories_HPP

class UUI_MissionStats_Categories_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_ArrowButton02_C* ArrowLeft;
    class UBasic_ArrowButton02_C* ArrowRight;
    class UHorizontalBox* CategoryParent;
    TArray<class UTexture2D*> CategoryIcons;
    TArray<class UUI_MissionStats_Category_C*> Widgets;
    FUI_MissionStats_Categories_COnSelectedChanged OnSelectedChanged;
    void OnSelectedChanged();
    class UUI_MissionStats_Category_C* SelectedCategory;

    void SelectNext(bool ForwardDirection);
    void Add Vertical Bar();
    void Add Category(class UTexture2D* CategoryIcon, bool IsAllCategory, class UUI_MissionStats_Category_C*& CategoryWidget);
    void GetCategorySelection(TArray<class UTexture2D*>& Selection);
    void PreConstruct(bool IsDesignTime);
    void Set Categories(const TArray<class UTexture2D*>& CategoryIcons);
    void Setup Widget Events(class UUI_MissionStats_Category_C* Widget);
    void On Category Clicked(class UUI_MissionStats_Category_C* CategoryWidget, bool Is Selected);
    void BndEvt__ArrowLeft_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature();
    void BndEvt__ArrowRight_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature();
    void ExecuteUbergraph_UI_MissionStats_Categories(int32 EntryPoint);
    void OnSelectedChanged__DelegateSignature();
};

#endif
