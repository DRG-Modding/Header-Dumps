enum class EBeaconConnectionState {
    Invalid = 0,
    Closed = 1,
    Pending = 2,
    Open = 3,
    EBeaconConnectionState_MAX = 4,
};

enum class EClientRequestType {
    NonePending = 0,
    ExistingSessionReservation = 1,
    ReservationUpdate = 2,
    EmptyServerReservation = 3,
    Reconnect = 4,
    Abandon = 5,
    ReservationRemoveMembers = 6,
    AddOrUpdateReservation = 7,
    EClientRequestType_MAX = 8,
};

enum class EInAppPurchaseStatus {
    Invalid = 0,
    Failed = 1,
    Deferred = 2,
    Canceled = 3,
    Purchased = 4,
    Restored = 5,
    EInAppPurchaseStatus_MAX = 6,
};

enum class EOnlineProxyStoreOfferDiscountType {
    NotOnSale = 0,
    Percentage = 1,
    DiscountAmount = 2,
    PayAmount = 3,
    EOnlineProxyStoreOfferDiscountType_MAX = 4,
};

namespace EPartyReservationResult {
    enum Type {
        NoResult = 0,
        RequestPending = 1,
        GeneralError = 2,
        PartyLimitReached = 3,
        IncorrectPlayerCount = 4,
        RequestTimedOut = 5,
        ReservationDuplicate = 6,
        ReservationNotFound = 7,
        ReservationAccepted = 8,
        ReservationDenied = 9,
        ReservationDenied_CrossPlayRestriction = 10,
        ReservationDenied_Banned = 11,
        ReservationRequestCanceled = 12,
        ReservationInvalid = 13,
        BadSessionId = 14,
        ReservationDenied_ContainsExistingPlayers = 15,
        EPartyReservationResult_MAX = 16,
    };
}

enum class ESpectatorClientRequestType {
    NonePending = 0,
    ExistingSessionReservation = 1,
    ReservationUpdate = 2,
    EmptyServerReservation = 3,
    Reconnect = 4,
    Abandon = 5,
    ESpectatorClientRequestType_MAX = 6,
};

namespace ESpectatorReservationResult {
    enum Type {
        NoResult = 0,
        RequestPending = 1,
        GeneralError = 2,
        SpectatorLimitReached = 3,
        IncorrectPlayerCount = 4,
        RequestTimedOut = 5,
        ReservationDuplicate = 6,
        ReservationNotFound = 7,
        ReservationAccepted = 8,
        ReservationDenied = 9,
        ReservationDenied_CrossPlayRestriction = 10,
        ReservationDenied_Banned = 11,
        ReservationRequestCanceled = 12,
        ReservationInvalid = 13,
        BadSessionId = 14,
        ReservationDenied_ContainsExistingPlayers = 15,
        ESpectatorReservationResult_MAX = 16,
    };
}

