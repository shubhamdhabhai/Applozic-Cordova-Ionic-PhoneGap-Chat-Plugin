// NOTE: Do not edit this file. This code is auto-generated. Contact the
// Twilio SDK Team for more information.

//
//  TVIError.h
//  TwilioVideo
//
//  Copyright © 2016-2017 Twilio, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

#ifndef TVIError_h
#define TVIError_h

FOUNDATION_EXPORT NSString * _Nonnull const kTVIErrorDomain;

/**
 * An enumeration indicating the errors that can be raised by the SDK.
 */
typedef NS_ENUM (NSInteger, TVIError)
{
    TVIErrorUnknown = 0,                                      ///< An unknown error has occurred
    TVIErrorAccessTokenInvalidError = 20101,                  ///< Invalid Access Token
    TVIErrorAccessTokenHeaderInvalidError = 20102,            ///< Invalid Access Token header
    TVIErrorAccessTokenIssuerInvalidError = 20103,            ///< Invalid Access Token issuer/subject
    TVIErrorAccessTokenExpiredError = 20104,                  ///< Access Token expired or expiration date invalid
    TVIErrorAccessTokenNotYetValidError = 20105,              ///< Access Token not yet valid
    TVIErrorAccessTokenGrantsInvalidError = 20106,            ///< Invalid Access Token grants
    TVIErrorAccessTokenSignatureInvalidError = 20107,         ///< Invalid Access Token signature
    TVIErrorSignalingConnectionError = 53000,                 ///< Signaling connection error
    TVIErrorSignalingConnectionDisconnectedError = 53001,     ///< Signaling connection disconnected
    TVIErrorSignalingConnectionTimeoutError = 53002,          ///< Signaling connection timed out
    TVIErrorSignalingIncomingMessageInvalidError = 53003,     ///< Client received an invalid signaling message
    TVIErrorSignalingOutgoingMessageInvalidError = 53004,     ///< Client sent an invalid signaling message
    TVIErrorRoomNameInvalidError = 53100,                     ///< Room name is invalid
    TVIErrorRoomNameTooLongError = 53101,                     ///< Room name is too long
    TVIErrorRoomNameCharsInvalidError = 53102,                ///< Room name contains invalid characters
    TVIErrorRoomCreateFailedError = 53103,                    ///< Unable to create Room
    TVIErrorRoomConnectFailedError = 53104,                   ///< Unable to connect to Room
    TVIErrorRoomMaxParticipantsExceededError = 53105,         ///< Room contains too many Participants
    TVIErrorRoomNotFoundError = 53106,                        ///< Room not found
    TVIErrorRoomMaxParticipantsOutOfRangeError = 53107,       ///< MaxParticipants is out of range
    TVIErrorRoomTypeInvalidError = 53108,                     ///< RoomType is not valid
    TVIErrorRoomTimeoutOutOfRangeError = 53109,               ///< Timeout is out of range
    TVIErrorRoomStatusCallbackMethodInvalidError = 53110,     ///< StatusCallbackMethod is invalid
    TVIErrorRoomStatusCallbackInvalidError = 53111,           ///< StatusCallback is invalid
    TVIErrorRoomStatusInvalidError = 53112,                   ///< Status is invalid
    TVIErrorParticipantIdentityInvalidError = 53200,          ///< Participant identity is invalid
    TVIErrorParticipantIdentityTooLongError = 53201,          ///< Participant identity is too long
    TVIErrorParticipantIdentityCharsInvalidError = 53202,     ///< Participant identity contains invalid characters
    TVIErrorParticipantMaxTracksExceededError = 53203,        ///< Participant has too many Tracks
    TVIErrorParticipantNotFoundError = 53204,                 ///< Participant not found
    TVIErrorParticipantDuplicateIdentityError = 53205,        ///< Participant disconnected because of duplicate identity
    TVIErrorTrackInvalidError = 53300,                        ///< Track is invalid
    TVIErrorTrackNameInvalidError = 53301,                    ///< Track name is invalid
    TVIErrorTrackNameTooLongError = 53302,                    ///< Track name is too long
    TVIErrorTrackNameCharsInvalidError = 53303,               ///< Track name contains invalid characters
    TVIErrorMediaClientLocalDescFailedError = 53400,          ///< Client is unable to create or apply a local media description
    TVIErrorMediaServerLocalDescFailedError = 53401,          ///< Server is unable to create or apply a local media description
    TVIErrorMediaClientRemoteDescFailedError = 53402,         ///< Client is unable to apply a remote media description
    TVIErrorMediaServerRemoteDescFailedError = 53403,         ///< Server is unable to apply a remote media description
    TVIErrorMediaNoSupportedCodecError = 53404,               ///< No supported codec
    TVIErrorMediaConnectionError = 53405,                     ///< Media connection failed
    TVIErrorConfigurationAcquireFailedError = 53500,          ///< Unable to acquire configuration
    TVIErrorConfigurationAcquireTurnFailedError = 53501       ///< Unable to acquire TURN credentials
};

#endif
