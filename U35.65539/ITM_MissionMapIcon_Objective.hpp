#ifndef UE4SS_SDK_ITM_MissionMapIcon_Objective_HPP
#define UE4SS_SDK_ITM_MissionMapIcon_Objective_HPP

class UITM_MissionMapIcon_Objective_C : UUserWidget
{
    UTextBlock* DATA_ObjectiveResource;
    UImage* ICON_ObjectiveResource;
    UHorizontalBox* ObjectiveMarker;

    void SetData(UTexture2D* Texture, FText InText);
}

#endif
