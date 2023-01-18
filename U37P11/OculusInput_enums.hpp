enum class EBone {
    Wrist_Root = 0,
    Hand_Start = 0,
    Forearm_Stub = 1,
    Thumb_0 = 2,
    Thumb_1 = 3,
    Thumb_2 = 4,
    Thumb_3 = 5,
    Index_1 = 6,
    Index_2 = 7,
    Index_3 = 8,
    Middle_1 = 9,
    Middle_2 = 10,
    Middle_3 = 11,
    Ring_1 = 12,
    Ring_2 = 13,
    Ring_3 = 14,
    Pinky_0 = 15,
    Pinky_1 = 16,
    Pinky_2 = 17,
    Pinky_3 = 18,
    Thumb_Tip = 19,
    Max_Skinnable = 19,
    Index_Tip = 20,
    Middle_Tip = 21,
    Ring_Tip = 22,
    Pinky_Tip = 23,
    Hand_End = 24,
    Bone_Max = 24,
    Invalid = 25,
    EBone_MAX = 26,
};

enum class EConfidenceBehavior {
    None = 0,
    HideActor = 1,
    EConfidenceBehavior_MAX = 2,
};

enum class EOculusHandType {
    None = 0,
    HandLeft = 1,
    HandRight = 2,
    EOculusHandType_MAX = 3,
};

enum class ESystemGestureBehavior {
    None = 0,
    SwapMaterial = 1,
    ESystemGestureBehavior_MAX = 2,
};

enum class ETrackingConfidence {
    Low = 0,
    High = 1,
    ETrackingConfidence_MAX = 2,
};

